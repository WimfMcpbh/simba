/**
 * @file waveforms.h
 * @version 1.0
 *
 * @section License
 * Copyright (C) 2015, Erik Moqvist
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * This file is part of the Simba project.
 */

#ifndef __WAVEFORMS_H__
#define __WAVEFORMS_H__

#include "simba.h"

/**
 * A sine wave.
 *
 *  65535         ,--.          ,--.          ,-
 *               /    \        /    \        /
 *              /      \      /      \      /
 *        \    /        \    /        \    /
 *      0  `--´          `--´          `--´
 */
static uint32_t waveform_sine_256[] = {
    32767, 33571, 34375, 35178, 35979, 36778, 37575, 38369,
    39160, 39946, 40729, 41507, 42279, 43046, 43806, 44560,
    45307, 46046, 46777, 47500, 48213, 48918, 49613, 50298,
    50972, 51635, 52287, 52927, 53554, 54170, 54772, 55362,
    55937, 56499, 57046, 57579, 58097, 58599, 59086, 59557,
    60012, 60451, 60873, 61278, 61665, 62036, 62388, 62723,
    63040, 63339, 63619, 63881, 64124, 64348, 64552, 64738,
    64905, 65052, 65180, 65288, 65377, 65446, 65495, 65525,
    65535, 65525, 65495, 65446, 65377, 65288, 65180, 65052,
    64905, 64738, 64552, 64348, 64124, 63881, 63619, 63339,
    63040, 62723, 62388, 62036, 61665, 61278, 60873, 60451,
    60012, 59557, 59086, 58599, 58097, 57579, 57046, 56499,
    55937, 55362, 54772, 54170, 53554, 52927, 52287, 51635,
    50972, 50298, 49613, 48918, 48213, 47500, 46777, 46046,
    45307, 44560, 43806, 43046, 42279, 41507, 40729, 39946,
    39160, 38369, 37575, 36778, 35979, 35178, 34375, 33571,
    32767, 31963, 31159, 30356, 29555, 28756, 27959, 27165,
    26374, 25588, 24805, 24027, 23255, 22488, 21728, 20974,
    20227, 19488, 18757, 18034, 17321, 16616, 15921, 15236,
    14562, 13899, 13247, 12607, 11980, 11364, 10762, 10172,
    9597, 9035, 8488, 7955, 7437, 6935, 6448, 5977,
    5522, 5083, 4661, 4256, 3869, 3498, 3146, 2811,
    2494, 2195, 1915, 1653, 1410, 1186, 982, 796,
    629, 482, 354, 246, 157, 88, 39, 9,
    0, 9, 39, 88, 157, 246, 354, 482,
    629, 796, 982, 1186, 1410, 1653, 1915, 2195,
    2494, 2811, 3146, 3498, 3869, 4256, 4661, 5083,
    5522, 5977, 6448, 6935, 7437, 7955, 8488, 9035,
    9597, 10172, 10762, 11364, 11980, 12607, 13247, 13899,
    14562, 15236, 15921, 16616, 17321, 18034, 18757, 19488,
    20227, 20974, 21728, 22488, 23255, 24027, 24805, 25588,
    26374, 27165, 27959, 28756, 29555, 30356, 31159, 31963
};

/**
 * A square wave.
 *
 *  65535         +--------+        +--------+
 *                |        |        |        |
 *                |        |        |        |
 *                |        |        |        |
 *      0 --------+        +--------+        +--------
 */
static uint32_t waveform_square_256[] = {
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535,
    65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535
};

/**
 * A saw wave.
 *
 *  65535     ,   ,   ,   ,   ,   ,   ,
 *           /|  /|  /|  /|  /|  /|  /|
 *          / | / | / | / | / | / | / |
 *         /  |/  |/  |/  |/  |/  |/  |
 *      0 ´   ´   ´   ´   ´   ´   ´   ´
 */
static uint32_t waveform_saw_256[] = {
    0, 257, 514, 771, 1028, 1285, 1542, 1799,
    2056, 2313, 2570, 2827, 3084, 3341, 3598, 3855,
    4112, 4369, 4626, 4883, 5140, 5397, 5654, 5911,
    6168, 6425, 6682, 6939, 7196, 7453, 7710, 7967,
    8224, 8481, 8738, 8995, 9252, 9509, 9766, 10023,
    10280, 10537, 10794, 11051, 11308, 11565, 11822, 12079,
    12336, 12593, 12850, 13107, 13364, 13621, 13878, 14135,
    14392, 14649, 14906, 15163, 15420, 15677, 15934, 16191,
    16448, 16705, 16962, 17219, 17476, 17733, 17990, 18247,
    18504, 18761, 19018, 19275, 19532, 19789, 20046, 20303,
    20560, 20817, 21074, 21331, 21588, 21845, 22102, 22359,
    22616, 22873, 23130, 23387, 23644, 23901, 24158, 24415,
    24672, 24929, 25186, 25443, 25700, 25957, 26214, 26471,
    26728, 26985, 27242, 27499, 27756, 28013, 28270, 28527,
    28784, 29041, 29298, 29555, 29812, 30069, 30326, 30583,
    30840, 31097, 31354, 31611, 31868, 32125, 32382, 32639,
    32896, 33153, 33410, 33667, 33924, 34181, 34438, 34695,
    34952, 35209, 35466, 35723, 35980, 36237, 36494, 36751,
    37008, 37265, 37522, 37779, 38036, 38293, 38550, 38807,
    39064, 39321, 39578, 39835, 40092, 40349, 40606, 40863,
    41120, 41377, 41634, 41891, 42148, 42405, 42662, 42919,
    43176, 43433, 43690, 43947, 44204, 44461, 44718, 44975,
    45232, 45489, 45746, 46003, 46260, 46517, 46774, 47031,
    47288, 47545, 47802, 48059, 48316, 48573, 48830, 49087,
    49344, 49601, 49858, 50115, 50372, 50629, 50886, 51143,
    51400, 51657, 51914, 52171, 52428, 52685, 52942, 53199,
    53456, 53713, 53970, 54227, 54484, 54741, 54998, 55255,
    55512, 55769, 56026, 56283, 56540, 56797, 57054, 57311,
    57568, 57825, 58082, 58339, 58596, 58853, 59110, 59367,
    59624, 59881, 60138, 60395, 60652, 60909, 61166, 61423,
    61680, 61937, 62194, 62451, 62708, 62965, 63222, 63479,
    63736, 63993, 64250, 64507, 64764, 65021, 65278, 65535
};

/**
 * An acoustic guitar.
 */
static uint32_t waveform_acoustic_guitar_600[] = {
    33412, 34536, 35727, 36949, 38190, 39524, 40831, 42179,
    43569, 44876, 46203, 47612, 48921, 50184, 51475, 52702,
    53874, 54978, 56070, 57087, 58052, 58957, 59746, 60498,
    61188, 61807, 62391, 62919, 63352, 63731, 64071, 64375,
    64607, 64794, 64994, 65127, 65225, 65306, 65372, 65437,
    65475, 65473, 65517, 65519, 65535, 65521, 65509, 65507,
    65459, 65384, 65336, 65286, 65237, 65147, 65006, 64897,
    64770, 64591, 64418, 64226, 64027, 63787, 63555, 63249,
    62925, 62580, 62204, 61811, 61370, 60894, 60407, 59913,
    59359, 58733, 58104, 57454, 56773, 56088, 55325, 54515,
    53691, 52847, 51983, 51046, 50115, 49153, 48119, 47096,
    46032, 44934, 43857, 42735, 41546, 40374, 39210, 38067,
    36851, 35626, 34456, 33237, 32059, 30927, 29761, 28629,
    27515, 26468, 25454, 24465, 23478, 22548, 21697, 20890,
    20070, 19345, 18680, 18011, 17415, 16853, 16285, 15791,
    15304, 14836, 14426, 14045, 13642, 13231, 12858, 12482,
    12095, 11762, 11420, 11063, 10711, 10391, 10046, 9672,
    9398, 9065, 8725, 8419, 8112, 7810, 7534, 7252,
    6984, 6741, 6459, 6175, 5931, 5699, 5468, 5208,
    4970, 4769, 4541, 4285, 4053, 3844, 3606, 3387,
    3193, 3004, 2817, 2637, 2470, 2309, 2220, 2104,
    2005, 1924, 1900, 1894, 1882, 1922, 1999, 2071,
    2166, 2289, 2406, 2541, 2694, 2837, 2980, 3127,
    3324, 3469, 3614, 3763, 3886, 4037, 4184, 4271,
    4376, 4503, 4619, 4718, 4811, 4950, 5083, 5202,
    5331, 5494, 5711, 5907, 6098, 6308, 6565, 6859,
    7172, 7486, 7845, 8233, 8634, 9049, 9452, 9889,
    10397, 10880, 11343, 11853, 12377, 12897, 13414, 13950,
    14514, 15080, 15662, 16257, 16865, 17475, 18055, 18626,
    19288, 19951, 20583, 21232, 21959, 22616, 23234, 23927,
    24574, 25188, 25873, 26488, 27096, 27714, 28323, 28883,
    29445, 30033, 30597, 31161, 31747, 32315, 32854, 33442,
    34051, 34641, 35219, 35884, 36516, 37225, 37910, 38599,
    39342, 40114, 40823, 41544, 42362, 43160, 43907, 44606,
    45384, 46105, 46790, 47497, 48149, 48754, 49384, 49940,
    50454, 50992, 51471, 51902, 52333, 52799, 53240, 53657,
    54060, 54410, 54829, 55262, 55711, 56118, 56561, 57043,
    57500, 57913, 58354, 58826, 59247, 59684, 60077, 60417,
    60755, 61072, 61336, 61571, 61755, 61847, 61942, 62000,
    62014, 61988, 61904, 61783, 61658, 61477, 61289, 61074,
    60874, 60689, 60471, 60226, 60000, 59803, 59565, 59369,
    59128, 58932, 58723, 58475, 58229, 57953, 57645, 57325,
    56914, 56449, 55957, 55407, 54769, 54104, 53389, 52577,
    51753, 50919, 50021, 49070, 48178, 47245, 46280, 45390,
    44525, 43669, 42906, 42181, 41500, 40926, 40442, 40001,
    39614, 39322, 39081, 38879, 38748, 38654, 38553, 38460,
    38351, 38196, 38027, 37852, 37598, 37211, 36804, 36335,
    35757, 35159, 34460, 33680, 32844, 31943, 31010, 30059,
    29074, 28083, 27080, 26157, 25241, 24312, 23470, 22705,
    21990, 21339, 20779, 20289, 19854, 19496, 19228, 19014,
    18841, 18726, 18680, 18583, 18585, 18565, 18535, 18567,
    18595, 18577, 18563, 18553, 18480, 18487, 18466, 18400,
    18341, 18325, 18327, 18346, 18394, 18452, 18579, 18767,
    18978, 19216, 19478, 19810, 20229, 20654, 21093, 21637,
    22155, 22664, 23297, 23831, 24373, 24945, 25523, 26046,
    26540, 27050, 27442, 27870, 28252, 28566, 28873, 29179,
    29398, 29566, 29779, 29975, 30118, 30259, 30404, 30563,
    30716, 30871, 31028, 31179, 31427, 31616, 31798, 32027,
    32273, 32511, 32726, 32913, 33108, 33317, 33489, 33654,
    33773, 33918, 33996, 34067, 34141, 34159, 34176, 34151,
    34176, 34182, 34143, 34089, 34065, 34095, 34127, 34141,
    34242, 34337, 34482, 34663, 34869, 35098, 35358, 35652,
    35974, 36313, 36692, 37016, 37403, 37785, 38124, 38464,
    38772, 39046, 39296, 39477, 39637, 39689, 39695, 39671,
    39532, 39288, 39018, 38672, 38192, 37695, 37129, 36456,
    35765, 34993, 34129, 33285, 32428, 31514, 30545, 29699,
    28758, 27815, 26949, 26121, 25309, 24540, 23794, 23110,
    22515, 21967, 21496, 21055, 20733, 20457, 20217, 20066,
    19981, 19947, 19967, 20023, 20150, 20328, 20505, 20718,
    20994, 21270, 21548, 21824, 22124, 22417, 22719, 23009,
    23273, 23524, 23746, 23935, 24101, 24252, 24371, 24473,
    24530, 24556, 24576, 24568, 24532, 24499, 24453, 24389,
    24320, 24250, 24165, 24093, 24066, 24070, 24078, 24121,
    24207, 24322, 24475, 24699, 24999, 25329, 25720, 26198,
    26707, 27318, 28039, 28750, 29537, 30418, 31362, 32376
};

/**
 * A flute.
 */
static uint32_t waveform_flute_600[] = {
    32996, 33266, 33562, 33888, 34242, 34580, 34908, 35234,
    35530, 35800, 36056, 36274, 36464, 36634, 36776, 36906,
    37028, 37152, 37282, 37434, 37612, 37794, 37972, 38152,
    38310, 38444, 38548, 38616, 38660, 38684, 38690, 38684,
    38674, 38664, 38660, 38670, 38704, 38760, 38830, 38910,
    38994, 39078, 39158, 39228, 39288, 39348, 39414, 39482,
    39562, 39658, 39766, 39894, 40052, 40230, 40430, 40648,
    40886, 41127, 41365, 41601, 41813, 42011, 42203, 42381,
    42551, 42725, 42895, 43067, 43243, 43423, 43597, 43765,
    43931, 44079, 44215, 44337, 44437, 44521, 44589, 44641,
    44679, 44707, 44733, 44763, 44799, 44847, 44913, 44997,
    45103, 45211, 45321, 45433, 45531, 45607, 45663, 45703,
    45729, 45745, 45757, 45777, 45815, 45875, 45951, 46043,
    46155, 46279, 46409, 46547, 46695, 46847, 47007, 47183,
    47357, 47527, 47703, 47867, 48029, 48193, 48347, 48501,
    48659, 48825, 48993, 49170, 49366, 49568, 49788, 50034,
    50288, 50554, 50828, 51116, 51396, 51674, 51958, 52228,
    52498, 52782, 53058, 53334, 53618, 53892, 54160, 54412,
    54656, 54876, 55090, 55312, 55528, 55750, 55992, 56236,
    56486, 56740, 56970, 57186, 57391, 57589, 57767, 57943,
    58133, 58329, 58539, 58773, 59019, 59283, 59569, 59847,
    60125, 60399, 60677, 60935, 61181, 61425, 61649, 61863,
    62077, 62279, 62475, 62677, 62875, 63081, 63293, 63519,
    63741, 63965, 64195, 64405, 64599, 64781, 64931, 65051,
    65145, 65217, 65279, 65331, 65379, 65425, 65469, 65511,
    65535, 65532, 65495, 65435, 65349, 65231, 65097, 64949,
    64795, 64627, 64451, 64253, 64029, 63799, 63557, 63299,
    63051, 62813, 62591, 62401, 62229, 62075, 61933, 61809,
    61697, 61589, 61489, 61391, 61289, 61185, 61075, 60951,
    60821, 60683, 60549, 60417, 60295, 60181, 60071, 59973,
    59875, 59761, 59637, 59493, 59323, 59133, 58919, 58683,
    58415, 58137, 57839, 57513, 57182, 56834, 56456, 56070,
    55664, 55234, 54756, 54264, 53742, 53176, 52604, 52012,
    51382, 50766, 50146, 49498, 48873, 48249, 47631, 47001,
    46409, 45829, 45241, 44691, 44153, 43605, 43077, 42547,
    41993, 41451, 40902, 40344, 39760, 39192, 38620, 38024,
    37444, 36860, 36254, 35672, 35096, 34508, 33950, 33410,
    32888, 32366, 31884, 31422, 30968, 30552, 30156, 29770,
    29422, 29098, 28788, 28516, 28264, 28036, 27822, 27634,
    27462, 27298, 27156, 27032, 26922, 26832, 26766, 26724,
    26704, 26700, 26708, 26726, 26740, 26738, 26706, 26646,
    26564, 26458, 26332, 26202, 26074, 25968, 25874, 25788,
    25702, 25620, 25530, 25422, 25298, 25156, 24996, 24826,
    24644, 24441, 24237, 24021, 23795, 23551, 23307, 23057,
    22789, 22523, 22255, 21971, 21695, 21417, 21135, 20871,
    20619, 20383, 20157, 19963, 19793, 19641, 19515, 19411,
    19323, 19259, 19213, 19179, 19151, 19125, 19099, 19063,
    19017, 18955, 18881, 18803, 18725, 18641, 18559, 18477,
    18395, 18305, 18207, 18097, 17973, 17853, 17733, 17611,
    17499, 17391, 17287, 17189, 17083, 16971, 16845, 16717,
    16577, 16425, 16274, 16126, 15974, 15834, 15700, 15572,
    15454, 15342, 15234, 15126, 15022, 14912, 14790, 14668,
    14544, 14412, 14286, 14164, 14052, 13956, 13864, 13762,
    13646, 13518, 13368, 13184, 12980, 12768, 12552, 12352,
    12160, 11978, 11818, 11668, 11506, 11308, 11088, 10840,
    10550, 10238, 9910, 9576, 9270, 8984, 8706, 8456,
    8226, 8005, 7771, 7539, 7297, 7029, 6753, 6459,
    6141, 5825, 5501, 5167, 4863, 4581, 4321, 4077,
    3865, 3679, 3507, 3363, 3235, 3123, 3039, 2975,
    2931, 2905, 2893, 2889, 2895, 2907, 2921, 2935,
    2947, 2953, 2951, 2937, 2907, 2859, 2797, 2721,
    2637, 2537, 2437, 2333, 2225, 2119, 2007, 1889,
    1771, 1653, 1531, 1407, 1295, 1193, 1097, 1021,
    961, 919, 893, 881, 881, 889, 909, 939,
    981, 1033, 1099, 1185, 1285, 1405, 1555, 1725,
    1923, 2157, 2415, 2697, 2999, 3325, 3653, 3993,
    4351, 4705, 5061, 5429, 5783, 6131, 6489, 6827,
    7157, 7481, 7811, 8123, 8434, 8748, 9048, 9346,
    9650, 9942, 10232, 10526, 10798, 11064, 11316, 11560,
    11780, 11988, 12196, 12396, 12596, 12814, 13042, 13292,
    13570, 13854, 14148, 14454, 14788, 15124, 15474,15856,
    16252, 16673, 17133, 17593, 18063, 18563, 19055, 19553,
    20055, 20585, 21111, 21653, 22229, 22797, 23373, 23981,
    24571, 25166, 25778, 26370, 26964, 27558, 28172, 28756,
    29326, 29898, 30430, 30946,31466, 31938, 32354, 32712
};

/**
 * Theremin.
 */
static uint32_t waveform_theremin_600[] = {
    32976, 33220, 33456, 33692, 33934, 34168, 34400, 34632,
    34872, 35102, 35332, 35570, 35798, 36026, 36262, 36488,
    36714, 36946, 37168, 37388, 37606, 37832, 38046, 38258,
    38476, 38684, 38890, 39100, 39302, 39502, 39700, 39904,
    40098, 40290, 40488, 40676, 40864, 41056, 41240, 41424,
    41612, 41794, 41974, 42154, 42338, 42516, 42694, 42876,
    43052, 43224, 43404, 43576, 43744, 43920, 44086, 44254,
    44420, 44592, 44758, 44924, 45098, 45264, 45434, 45610,
    45780, 45950, 46126, 46294, 46460, 46624, 46790, 46950,
    47104, 47262, 47414, 47562, 47714, 47862, 48008, 48160,
    48308, 48458, 48606, 48762, 48912, 49062, 49219, 49369,
    49519, 49673, 49823, 49971, 50125, 50275, 50421, 50569,
    50719, 50863, 51005, 51149, 51287, 51421, 51559, 51689,
    51817, 51949, 52075, 52199, 52325, 52455, 52583, 52709,
    52841, 52967, 53095, 53227, 53357, 53485, 53619, 53749,
    53879, 54011, 54149, 54281, 54413, 54549, 54679, 54805,
    54933, 55051, 55167, 55281, 55387, 55491, 55591, 55693,
    55791, 55889, 55991, 56091, 56191, 56297, 56399, 56501,
    56605, 56711, 56815, 56917, 57023, 57123, 57223, 57325,
    57425, 57521, 57621, 57715, 57809, 57899, 57991, 58077,
    58161, 58245, 58323, 58401, 58477, 58549, 58619, 58691,
    58759, 58823, 58887, 58953, 59013, 59071, 59129, 59185,
    59237, 59291, 59339, 59387, 59435, 59479, 59523, 59561,
    59601, 59633, 59663, 59691, 59713, 59729, 59743, 59751,
    59755, 59755, 59751, 59745, 59735, 59723, 59709, 59695,
    59675, 59655, 59631, 59605, 59579, 59549, 59517, 59485,
    59449, 59413, 59375, 59335, 59293, 59247, 59199, 59149,
    59091, 59031, 58965, 58893, 58817, 58737, 58653, 58561,
    58471, 58377, 58279, 58185, 58089, 57989, 57893, 57795,
    57691, 57587, 57477, 57363, 57237, 57107, 56967, 56815,
    56659, 56497, 56321, 56147, 55969, 55781, 55599, 55417,
    55235, 55045, 54861, 54677, 54485, 54295, 54105, 53903,
    53705, 53503, 53289, 53079, 52867, 52649, 52419, 52193,
    51961, 51717, 51475, 51229, 50969, 50713, 50453, 50187,
    49905, 49629, 49347, 49050, 48758, 48462, 48150, 47842,
    47532, 47204, 46884, 46564, 46240, 45906, 45582, 45260,
    44926, 44604, 44284, 43950, 43626, 43298, 42954, 42616,
    42272, 41920, 41546, 41180, 40808, 40418, 40038, 39658,
    39260, 38878, 38498, 38108, 37732, 37356, 36984, 36598,
    36224, 35852, 35462, 35086, 34708, 34312, 33928, 33544,
    33142, 32756, 32366, 31978, 31574, 31186, 30800, 30400,
    30016, 29632, 29234, 28850, 28466, 28064, 27676, 27282,
    26886, 26472, 26068, 25662, 25240, 24830, 24420, 23996,
    23588, 23182, 22764, 22364, 21966, 21570, 21162, 20770,
    20384, 19984, 19604, 19226, 18840, 18470, 18106, 17730,
    17372, 17018, 16662, 16295, 15943, 15589, 15221, 14865,
    14509, 14141, 13787, 13435, 13073, 12725, 12383, 12047,
    11701, 11373, 11049, 10717, 10403, 10095, 9779, 9479,
    9187, 8899, 8605, 8331, 8061, 7785, 7527, 7271,
    7009, 6759, 6511, 6255, 6011, 5767, 5527, 5279,
    5045, 4815, 4581, 4361, 4147, 3931, 3731, 3535,
    3341, 3159, 2981, 2809, 2637, 2475, 2317, 2157,
    2007, 1861, 1717, 1581, 1451, 1321, 1201, 1089,
    981, 877, 781, 693, 607, 531, 459, 391,
    331, 277, 227, 183, 145, 115, 87, 65,
    46, 30, 20, 8, 1, 1, 1, 1,
    1, 1, 2, 16,32, 57, 89, 127,
    169, 221, 277, 337, 407, 477, 555, 635,
    725, 815, 909, 1013, 1117, 1227, 1345, 1463,
    1587, 1719, 1853, 1991, 2133, 2285, 2435, 2589,
    2753, 2913, 3077, 3247, 3413, 3581, 3757, 3929,
    4105, 4281, 4469, 4653, 4841, 5041, 5237, 5439,
    5651, 5859, 6071, 6293, 6511, 6731, 6951, 7183,
    7407, 7635, 7871, 8103, 8335, 8577, 8811, 9049,
    9287, 9537, 9777, 10019, 10273, 10517, 10765, 11025,
    11279, 11537, 11809, 12075, 12347, 12621, 12911, 13193,
    13479, 13775, 14063, 14351, 14649, 14935, 15221, 15515,
    15799, 16083, 16367, 16660, 16940, 17220, 17510, 17788,
    18066, 18352, 18626, 18900, 19182, 19456, 19728, 20000,
    20284, 20558, 20830, 21114, 21388, 21662, 21946, 22220,
    22494, 22780, 23054, 23330, 23608, 23894, 24172, 24448,
    24734, 25008, 25280, 25560, 25828, 26092, 26362, 26622,
    26878, 27134, 27398, 27652, 27906, 28170, 28426, 28684,
    28952, 29212, 29472, 29740, 29998, 30256, 30510, 30774,
    31024, 31272, 31526, 31770, 32012, 32262, 32500, 32738
};

#endif
