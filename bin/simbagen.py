#!/usr/bin/env python

from __future__ import print_function

import sys
import time
import getpass

file_fmt = """/**
 * @section License
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2014-2016, Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * This file is part of the Simba project.
 */

/**
 * This file was generated by simbagen.py {major}.{minor} {date}.
 */

#include "simba.h"

{sysinfo}
"""

SYSINFO_FMT = """const FAR char sysinfo[] = "app:    {name}-{version} built {date} by {user}.\\r\\n"
                           "board:  {board}\\r\\n"
                           "mcu:    {mcu}\\r\\n";
"""

MAJOR = 1
MINOR = 1


ID = 0x8000


def generate_id():
    """Generate a unique identifier. It may not contain the c-string
    termination character \x00.

    """

    global ID
    ID += 1

    # The command parser function does not accept quotes (0x22) in the
    # command string.
    if (ID & 0xff) in [0, 0x22]:
        ID += 1

    if ID == 0xffff:
        sys.exit(1)

    return ID


def main():
    name = sys.argv[1]
    version = sys.argv[2]
    board = sys.argv[3]
    mcu = sys.argv[4]
    outfile = sys.argv[5]
    soamdb = sys.argv[6]
    dbfiles = sys.argv[7:]

    now = time.strftime("%Y-%m-%d %H:%M %Z")

    sysinfo = SYSINFO_FMT.format(name=name,
                                 version=version,
                                 date=now,
                                 user=getpass.getuser(),
                                 board=board,
                                 mcu=mcu)

    formats = []
    format_string_definitions = ''
    decoder_format_strings = ''
    commands = []
    command_definitions = ''
    decoder_commands = ''

    for dbfile in dbfiles:
        with open(dbfile) as fin:
            while True:
                line = fin.readline()

                if not line:
                    break

                if line.startswith('FMT'):
                    original_fmtstr = fin.readline().strip()
                    c_variable = fin.readline().strip()
                    soam_fmtstr = fin.readline().strip()
                    decoder_fmtstr = fin.readline().strip()
                    fin.readline()

                    if original_fmtstr in formats:
                        continue

                    formats.append(original_fmtstr)
                    generated_id = generate_id()
                    soam_fmtstr = '"\\x{:02x}\\x{:02x}"'.format(
                        (generated_id >> 8) & 0xff,
                        generated_id & 0xff) + soam_fmtstr
                    format_string_definitions += 'const FAR char {}[] = {};\n'.format(
                        c_variable,
                        soam_fmtstr)
                    decoder_format_strings += 'FMT: 0x{:x} {}\n'.format(generated_id,
                                                                        decoder_fmtstr)
                elif line.startswith('CMD'):
                    command = fin.readline().strip()
                    c_variable = fin.readline().strip()
                    fin.readline()

                    if command in commands:
                        continue

                    commands.append(command)
                    generated_id = generate_id()
                    soam_command = '"/\\x{:02x}\\x{:02x}"'.format(
                        (generated_id >> 8) & 0xff,
                        generated_id & 0xff)
                    command_definitions += 'const FAR char {}[] = {};\n'.format(
                        c_variable,
                        soam_command)
                    decoder_commands += 'CMD: 0x{:x} {}\n'.format(generated_id, command)
                else:
                    print('Bad line:', line)
                    sys.exit(1)

    date = time.strftime("%Y-%m-%d %H:%M %Z")

    with open(outfile, 'w') as fout:
        fout.write(file_fmt.format(filename=outfile,
                                   major=MAJOR,
                                   minor=MINOR,
                                   date=date,
                                   sysinfo=sysinfo))
        fout.write(format_string_definitions)
        fout.write(command_definitions)

    with open(soamdb, 'wb') as fout:
        fout.write('# This file was generated by simbagen.py {major}.{minor} {date}.\n'.format(
            major=MAJOR,
            minor=MINOR,
            date=date))
        fout.write(decoder_format_strings)
        fout.write(decoder_commands)


if __name__ == '__main__':
    main()