/*
 * Copyright 2018 NXP
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Author York Sun <york.sun@nxp.com>
 */

#ifndef _PIE_H_
#define _PIE_H_

struct pie {
	uint32_t addr;
	uint16_t data;
};

static const struct pie pie_udimm[] = {
	{0x090000,0x10},
	{0x090001,0x400},
	{0x090002,0x10e},
	{0x090003,0x0},
	{0x090004,0x0},
	{0x090005,0x8},
	{0x090029,0xb},
	{0x09002a,0x480},
	{0x09002b,0x109},
	{0x09002c,0x8},
	{0x09002d,0x448},
	{0x09002e,0x139},
	{0x09002f,0x8},
	{0x090030,0x478},
	{0x090031,0x109},
	{0x090032,0x2},
	{0x090033,0x10},
	{0x090034,0x139},
	{0x090035,0xb},
	{0x090036,0x7c0},
	{0x090037,0x139},
	{0x090038,0x44},
	{0x090039,0x630},
	{0x09003a,0x159},
	{0x09003b,0x14f},
	{0x09003c,0x630},
	{0x09003d,0x159},
	{0x09003e,0x47},
	{0x09003f,0x630},
	{0x090040,0x149},
	{0x090041,0x4f},
	{0x090042,0x630},
	{0x090043,0x179},
	{0x090044,0x8},
	{0x090045,0xe0},
	{0x090046,0x109},
	{0x090047,0x0},
	{0x090048,0x7c8},
	{0x090049,0x109},
	{0x09004a,0x0},
	{0x09004b,0x1},
	{0x09004c,0x8},
	{0x09004d,0x0},
	{0x09004e,0x45a},
	{0x09004f,0x9},
	{0x090050,0x0},
	{0x090051,0x448},
	{0x090052,0x109},
	{0x090053,0x40},
	{0x090054,0x630},
	{0x090055,0x179},
	{0x090056,0x1},
	{0x090057,0x618},
	{0x090058,0x109},
	{0x090059,0x40c0},
	{0x09005a,0x630},
	{0x09005b,0x149},
	{0x09005c,0x8},
	{0x09005d,0x4},
	{0x09005e,0x48},
	{0x09005f,0x4040},
	{0x090060,0x630},
	{0x090061,0x149},
	{0x090062,0x0},
	{0x090063,0x4},
	{0x090064,0x48},
	{0x090065,0x40},
	{0x090066,0x630},
	{0x090067,0x149},
	{0x090068,0x10},
	{0x090069,0x4},
	{0x09006a,0x18},
	{0x09006b,0x0},
	{0x09006c,0x4},
	{0x09006d,0x78},
	{0x09006e,0x549},
	{0x09006f,0x630},
	{0x090070,0x159},
	{0x090071,0xd49},
	{0x090072,0x630},
	{0x090073,0x159},
	{0x090074,0x94a},
	{0x090075,0x630},
	{0x090076,0x159},
	{0x090077,0x441},
	{0x090078,0x630},
	{0x090079,0x149},
	{0x09007a,0x42},
	{0x09007b,0x630},
	{0x09007c,0x149},
	{0x09007d,0x1},
	{0x09007e,0x630},
	{0x09007f,0x149},
	{0x090080,0x0},
	{0x090081,0xe0},
	{0x090082,0x109},
	{0x090083,0xa},
	{0x090084,0x10},
	{0x090085,0x109},
	{0x090086,0x9},
	{0x090087,0x3c0},
	{0x090088,0x149},
	{0x090089,0x9},
	{0x09008a,0x3c0},
	{0x09008b,0x159},
	{0x09008c,0x18},
	{0x09008d,0x10},
	{0x09008e,0x109},
	{0x09008f,0x0},
	{0x090090,0x3c0},
	{0x090091,0x109},
	{0x090092,0x18},
	{0x090093,0x4},
	{0x090094,0x48},
	{0x090095,0x18},
	{0x090096,0x4},
	{0x090097,0x58},
	{0x090098,0xa},
	{0x090099,0x10},
	{0x09009a,0x109},
	{0x09009b,0x2},
	{0x09009c,0x10},
	{0x09009d,0x109},
	{0x09009e,0x5},
	{0x09009f,0x7c0},
	{0x0900a0,0x109},
	{0x0900a1,0x0},
	{0x0900a2,0x8140},
	{0x0900a3,0x10c},
	{0x0900a4,0x10},
	{0x0900a5,0x8138},
	{0x0900a6,0x10c},
	{0x0900a7,0x8},
	{0x0900a8,0x7c8},
	{0x0900a9,0x101},
	{0x0900aa,0x8},
	{0x0900ab,0x0},
	{0x0900ac,0x8},
	{0x0900ad,0x8},
	{0x0900ae,0x448},
	{0x0900af,0x109},
	{0x0900b0,0xf},
	{0x0900b1,0x7c0},
	{0x0900b2,0x109},
	{0x0900b3,0x47},
	{0x0900b4,0x630},
	{0x0900b5,0x109},
	{0x0900b6,0x8},
	{0x0900b7,0x618},
	{0x0900b8,0x109},
	{0x0900b9,0x8},
	{0x0900ba,0xe0},
	{0x0900bb,0x109},
	{0x0900bc,0x0},
	{0x0900bd,0x7c8},
	{0x0900be,0x109},
	{0x0900bf,0x8},
	{0x0900c0,0x8140},
	{0x0900c1,0x10c},
	{0x0900c2,0x0},
	{0x0900c3,0x1},
	{0x0900c4,0x8},
	{0x0900c5,0x8},
	{0x0900c6,0x4},
	{0x0900c7,0x8},
	{0x0900c8,0x8},
	{0x0900c9,0x7c8},
	{0x0900ca,0x101},
	{0x090006,0x0},
	{0x090007,0x0},
	{0x090008,0x8},
	{0x090009,0x0},
	{0x09000a,0x0},
	{0x09000b,0x0},
	{0x0d00e7,0x400},
	{0x090017,0x0},
	{0x090026,0x2b},
};

static const struct pie pie_rdimm[] = {
	{0x90000, 0x10},
	{0x90001, 0x400},
	{0x90002, 0x10e},
	{0x90003, 0x0},
	{0x90004, 0x0},
	{0x90005, 0x8},
	{0x40000, 0x10},
	{0x40020, 0x0},
	{0x40040, 0x0},
	{0x40060, 0x0},
	{0x40001, 0x70a},
	{0x40021, 0x7005},
	{0x40041, 0x0},
	{0x40061, 0x2001},
	{0x40002, 0x4010},
	{0x40022, 0x0},
	{0x40042, 0x0},
	{0x40062, 0x0},
	{0x90029, 0x10},
	{0x9002a, 0x400},
	{0x9002b, 0x16e},
	{0x9002c, 0x8},
	{0x9002d, 0x370},
	{0x9002e, 0x169},
	{0x9002f, 0x8},
	{0x90030, 0x7aa},
	{0x90031, 0x6a},
	{0x90032, 0x10},
	{0x90033, 0x7b2},
	{0x90034, 0x6a},
	{0x90035, 0x0},
	{0x90036, 0x48a},
	{0x90037, 0x6a},
	{0x90038, 0x9},
	{0x90039, 0x480},
	{0x9003a, 0x16a},
	{0x9003b, 0x4},
	{0x9003c, 0x790},
	{0x9003d, 0x16a},
	{0x9003e, 0xc},
	{0x9003f, 0x408},
	{0x90040, 0x169},
	{0x90041, 0xa},
	{0x90042, 0x0},
	{0x90043, 0x68},
	{0x90044, 0x0},
	{0x90045, 0x408},
	{0x90046, 0x169},
	{0x90047, 0x1},
	{0x90048, 0x480},
	{0x90049, 0x16a},
	{0x9004a, 0xb},
	{0x9004b, 0x480},
	{0x9004c, 0x109},
	{0x9004d, 0x8},
	{0x9004e, 0x448},
	{0x9004f, 0x139},
	{0x90050, 0x78},
	{0x90051, 0x8},
	{0x90052, 0x139},
	{0x90053, 0x2},
	{0x90054, 0x10},
	{0x90055, 0x139},
	{0x90056, 0xb},
	{0x90057, 0x7c0},
	{0x90058, 0x139},
	{0x90059, 0x44},
	{0x9005a, 0x630},
	{0x9005b, 0x159},
	{0x9005c, 0x14f},
	{0x9005d, 0x630},
	{0x9005e, 0x159},
	{0x9005f, 0x47},
	{0x90060, 0x630},
	{0x90061, 0x149},
	{0x90062, 0x4f},
	{0x90063, 0x630},
	{0x90064, 0x179},
	{0x90065, 0x8},
	{0x90066, 0xe0},
	{0x90067, 0x109},
	{0x90068, 0x0},
	{0x90069, 0x7c8},
	{0x9006a, 0x109},
	{0x9006b, 0x0},
	{0x9006c, 0x1},
	{0x9006d, 0x8},
	{0x9006e, 0x0},
	{0x9006f, 0x45a},
	{0x90070, 0x9},
	{0x90071, 0x0},
	{0x90072, 0x448},
	{0x90073, 0x109},
	{0x90074, 0x40},
	{0x90075, 0x630},
	{0x90076, 0x179},
	{0x90077, 0x1},
	{0x90078, 0x618},
	{0x90079, 0x109},
	{0x9007a, 0x40c0},
	{0x9007b, 0x630},
	{0x9007c, 0x149},
	{0x9007d, 0x8},
	{0x9007e, 0x4},
	{0x9007f, 0x48},
	{0x90080, 0x4040},
	{0x90081, 0x630},
	{0x90082, 0x149},
	{0x90083, 0x0},
	{0x90084, 0x4},
	{0x90085, 0x48},
	{0x90086, 0x40},
	{0x90087, 0x630},
	{0x90088, 0x149},
	{0x90089, 0x10},
	{0x9008a, 0x4},
	{0x9008b, 0x18},
	{0x9008c, 0x0},
	{0x9008d, 0x4},
	{0x9008e, 0x78},
	{0x9008f, 0x549},
	{0x90090, 0x630},
	{0x90091, 0x159},
	{0x90092, 0xd49},
	{0x90093, 0x630},
	{0x90094, 0x159},
	{0x90095, 0x94a},
	{0x90096, 0x630},
	{0x90097, 0x159},
	{0x90098, 0x441},
	{0x90099, 0x630},
	{0x9009a, 0x149},
	{0x9009b, 0x42},
	{0x9009c, 0x630},
	{0x9009d, 0x149},
	{0x9009e, 0x1},
	{0x9009f, 0x630},
	{0x900a0, 0x149},
	{0x900a1, 0x0},
	{0x900a2, 0xe0},
	{0x900a3, 0x109},
	{0x900a4, 0xa},
	{0x900a5, 0x10},
	{0x900a6, 0x109},
	{0x900a7, 0x9},
	{0x900a8, 0x3c0},
	{0x900a9, 0x149},
	{0x900aa, 0x9},
	{0x900ab, 0x3c0},
	{0x900ac, 0x159},
	{0x900ad, 0x18},
	{0x900ae, 0x10},
	{0x900af, 0x109},
	{0x900b0, 0x0},
	{0x900b1, 0x3c0},
	{0x900b2, 0x109},
	{0x900b3, 0x18},
	{0x900b4, 0x4},
	{0x900b5, 0x48},
	{0x900b6, 0x18},
	{0x900b7, 0x4},
	{0x900b8, 0x58},
	{0x900b9, 0xa},
	{0x900ba, 0x10},
	{0x900bb, 0x109},
	{0x900bc, 0x2},
	{0x900bd, 0x10},
	{0x900be, 0x109},
	{0x900bf, 0x5},
	{0x900c0, 0x7c0},
	{0x900c1, 0x109},
	{0x900c2, 0x3},
	{0x900c3, 0x370},
	{0x900c4, 0x169},
	{0x900c5, 0x3},
	{0x900c6, 0x8},
	{0x900c7, 0x139},
	{0x900c8, 0x0},
	{0x900c9, 0x400},
	{0x900ca, 0x16e},
	{0x900cb, 0x8},
	{0x900cc, 0x478},
	{0x900cd, 0x109},
	{0x900ce, 0x0},
	{0x900cf, 0x8140},
	{0x900d0, 0x10c},
	{0x900d1, 0x10},
	{0x900d2, 0x8138},
	{0x900d3, 0x10c},
	{0x900d4, 0x8},
	{0x900d5, 0x7c8},
	{0x900d6, 0x101},
	{0x900d7, 0x8},
	{0x900d8, 0x0},
	{0x900d9, 0x8},
	{0x900da, 0x8},
	{0x900db, 0x448},
	{0x900dc, 0x109},
	{0x900dd, 0xf},
	{0x900de, 0x7c0},
	{0x900df, 0x109},
	{0x900e0, 0x47},
	{0x900e1, 0x630},
	{0x900e2, 0x109},
	{0x900e3, 0x8},
	{0x900e4, 0x618},
	{0x900e5, 0x109},
	{0x900e6, 0x8},
	{0x900e7, 0xe0},
	{0x900e8, 0x109},
	{0x900e9, 0x0},
	{0x900ea, 0x7c8},
	{0x900eb, 0x109},
	{0x900ec, 0x8},
	{0x900ed, 0x8140},
	{0x900ee, 0x10c},
	{0x900ef, 0x0},
	{0x900f0, 0x1},
	{0x900f1, 0x8},
	{0x900f2, 0x8},
	{0x900f3, 0x4},
	{0x900f4, 0x8},
	{0x900f5, 0x8},
	{0x900f6, 0x7c8},
	{0x900f7, 0x101},
	{0x90006, 0x0},
	{0x90007, 0x0},
	{0x90008, 0x8},
	{0x90009, 0x0},
	{0x9000a, 0x0},
	{0x9000b, 0x0},
	{0xd00e7, 0x400},
	{0x90017, 0x0},
	{0x90026, 0x3a},
};

static const struct pie pie_lrdimm[] = {
	{0x90000, 0x10},
	{0x90001, 0x400},
	{0x90002, 0x10e},
	{0x90003, 0x0},
	{0x90004, 0x0},
	{0x90005, 0x8},
	{0x90029, 0xb},
	{0x9002a, 0x480},
	{0x9002b, 0x109},
	{0x9002c, 0x8},
	{0x9002d, 0x448},
	{0x9002e, 0x139},
	{0x9002f, 0x78},
	{0x90030, 0x8},
	{0x90031, 0x139},
	{0x90032, 0x2},
	{0x90033, 0x10},
	{0x90034, 0x139},
	{0x90035, 0xf},
	{0x90036, 0x7c0},
	{0x90037, 0x139},
	{0x90038, 0x44},
	{0x90039, 0x630},
	{0x9003a, 0x159},
	{0x9003b, 0x14f},
	{0x9003c, 0x630},
	{0x9003d, 0x159},
	{0x9003e, 0x47},
	{0x9003f, 0x630},
	{0x90040, 0x149},
	{0x90041, 0x4f},
	{0x90042, 0x630},
	{0x90043, 0x179},
	{0x90044, 0x8},
	{0x90045, 0xe0},
	{0x90046, 0x109},
	{0x90047, 0x0},
	{0x90048, 0x7c8},
	{0x90049, 0x109},
	{0x9004a, 0x0},
	{0x9004b, 0x1},
	{0x9004c, 0x8},
	{0x9004d, 0x0},
	{0x9004e, 0x45a},
	{0x9004f, 0x9},
	{0x90050, 0x0},
	{0x90051, 0x448},
	{0x90052, 0x109},
	{0x90053, 0x40},
	{0x90054, 0x630},
	{0x90055, 0x179},
	{0x90056, 0x1},
	{0x90057, 0x618},
	{0x90058, 0x109},
	{0x90059, 0x40c0},
	{0x9005a, 0x630},
	{0x9005b, 0x149},
	{0x9005c, 0x8},
	{0x9005d, 0x4},
	{0x9005e, 0x48},
	{0x9005f, 0x4040},
	{0x90060, 0x630},
	{0x90061, 0x149},
	{0x90062, 0x0},
	{0x90063, 0x4},
	{0x90064, 0x48},
	{0x90065, 0x40},
	{0x90066, 0x630},
	{0x90067, 0x149},
	{0x90068, 0x10},
	{0x90069, 0x4},
	{0x9006a, 0x18},
	{0x9006b, 0x0},
	{0x9006c, 0x4},
	{0x9006d, 0x78},
	{0x9006e, 0x549},
	{0x9006f, 0x630},
	{0x90070, 0x159},
	{0x90071, 0xd49},
	{0x90072, 0x630},
	{0x90073, 0x159},
	{0x90074, 0x94a},
	{0x90075, 0x630},
	{0x90076, 0x159},
	{0x90077, 0x441},
	{0x90078, 0x630},
	{0x90079, 0x149},
	{0x9007a, 0x42},
	{0x9007b, 0x630},
	{0x9007c, 0x149},
	{0x9007d, 0x1},
	{0x9007e, 0x630},
	{0x9007f, 0x149},
	{0x90080, 0x0},
	{0x90081, 0xe0},
	{0x90082, 0x109},
	{0x90083, 0xa},
	{0x90084, 0x10},
	{0x90085, 0x109},
	{0x90086, 0x9},
	{0x90087, 0x3c0},
	{0x90088, 0x149},
	{0x90089, 0x9},
	{0x9008a, 0x3c0},
	{0x9008b, 0x159},
	{0x9008c, 0x18},
	{0x9008d, 0x10},
	{0x9008e, 0x109},
	{0x9008f, 0x0},
	{0x90090, 0x3c0},
	{0x90091, 0x109},
	{0x90092, 0x18},
	{0x90093, 0x4},
	{0x90094, 0x48},
	{0x90095, 0x18},
	{0x90096, 0x4},
	{0x90097, 0x58},
	{0x90098, 0xa},
	{0x90099, 0x10},
	{0x9009a, 0x109},
	{0x9009b, 0x2},
	{0x9009c, 0x10},
	{0x9009d, 0x109},
	{0x9009e, 0x7},
	{0x9009f, 0x7c0},
	{0x900a0, 0x109},
	{0x900a1, 0x10},
	{0x900a2, 0x10},
	{0x900a3, 0x109},
	{0x900a4, 0x0},
	{0x900a5, 0x8140},
	{0x900a6, 0x10c},
	{0x900a7, 0x10},
	{0x900a8, 0x8138},
	{0x900a9, 0x10c},
	{0x900aa, 0x7},
	{0x900ab, 0x8},
	{0x900ac, 0x139},
	{0x900ad, 0x8},
	{0x900ae, 0x478},
	{0x900af, 0x109},
	{0x900b0, 0x8},
	{0x900b1, 0x7c8},
	{0x900b2, 0x101},
	{0x900b3, 0x8},
	{0x900b4, 0x0},
	{0x900b5, 0x8},
	{0x900b6, 0x8},
	{0x900b7, 0x448},
	{0x900b8, 0x109},
	{0x900b9, 0xf},
	{0x900ba, 0x7c0},
	{0x900bb, 0x109},
	{0x900bc, 0x47},
	{0x900bd, 0x630},
	{0x900be, 0x109},
	{0x900bf, 0x8},
	{0x900c0, 0x618},
	{0x900c1, 0x109},
	{0x900c2, 0x8},
	{0x900c3, 0xe0},
	{0x900c4, 0x109},
	{0x900c5, 0x0},
	{0x900c6, 0x7c8},
	{0x900c7, 0x109},
	{0x900c8, 0x8},
	{0x900c9, 0x8140},
	{0x900ca, 0x10c},
	{0x900cb, 0x0},
	{0x900cc, 0x1},
	{0x900cd, 0x8},
	{0x900ce, 0x8},
	{0x900cf, 0x4},
	{0x900d0, 0x8},
	{0x900d1, 0x8},
	{0x900d2, 0x7c8},
	{0x900d3, 0x101},
	{0x90006, 0x0},
	{0x90007, 0x0},
	{0x90008, 0x8},
	{0x90009, 0x0},
	{0x9000a, 0x0},
	{0x9000b, 0x0},
	{0xd00e7, 0x400},
	{0x90017, 0x0},
	{0x90026, 0x2e},
};

#endif
