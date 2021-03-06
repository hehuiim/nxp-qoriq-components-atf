/*
 * Copyright 2018 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Author York Sun <york.sun@nxp.com>
 */

#ifndef __IO_H__
#define __IO_H__

#define min(x, y) ({				\
	typeof(x) _min1 = (x);			\
	typeof(y) _min2 = (y);			\
	(void) (&_min1 == &_min2);		\
	_min1 < _min2 ? _min1 : _min2; })

#define max(x, y) ({				\
	typeof(x) _max1 = (x);			\
	typeof(y) _max2 = (y);			\
	(void) (&_max1 == &_max2);		\
	_max1 > _max2 ? _max1 : _max2; })

typedef unsigned long long phys_addr_t;
typedef unsigned long long phys_size_t;

 // Return higher 32 bits of physical address
#define PHYS_ADDR_HI(phys_addr) \
	    (uint32_t)(((uint64_t)phys_addr) >> 32)

 // Return lower 32 bits of physical address
#define PHYS_ADDR_LO(phys_addr) \
	    (uint32_t)(((uint64_t)phys_addr) & 0xFFFFFFFF)

/*
 * These macros are for ARM-based SoCs.
 * Raw IO access is presumed to be in little-endian.
 */
#define out8(a, v)	(*(volatile unsigned char *)(a) = (v))
#define out16(a, v)	(*(volatile unsigned short *)(a) = (v))
#define out32(a, v)	(*(volatile unsigned int *)(a) = (v))
#define out64(a, v)	(*(volatile unsigned long long *)(a) = (v))
#define in8(a)		(*(volatile unsigned char *)(a))
#define in16(a)		(*(volatile unsigned short *)(a))
#define in32(a)		(*(volatile unsigned int *)(a))
#define in64(a)		(*(volatile unsigned long long *)(a))

#define in_le16(a)	in16(a)
#define in_le32(a)	in32(a)
#define in_le64(a)	in64(a)
#define out_le16(a, v)	out16(a, v)
#define out_le32(a, v)	out32(a, v)
#define out_le64(a, v)	out64(a, v)
#define setbits_le32(a, v)	out_le32((a), in_le32(a) | (v))
#define clrbits_le32(a, c)	out_le32((a), in_le32(a) & ~(c))
#define clrsetbits_le32(a, c, s)	out_le32((a), (in_le32(a) & ~(c)) | (s))

#define uswap16(v)	((((v) & 0xff00) >> 8) | (((v) & 0xff) << 8))
#define uswap32(v)	((((v) & 0xff000000) >> 24)	|\
			 (((v) & 0x00ff0000) >> 8)	|\
			 (((v) & 0x0000ff00) << 8)	|\
			 (((v) & 0x000000ff) << 24))
#define uswap64(v)	((((v) & 0xff00000000000000ULL) >> 56)	|\
			 (((v) & 0x00ff000000000000ULL) >> 40)	|\
			 (((v) & 0x0000ff0000000000ULL) >> 24)	|\
			 (((v) & 0x000000ff00000000ULL) >> 8)	|\
			 (((v) & 0x00000000ff000000ULL) << 8)	|\
			 (((v) & 0x0000000000ff0000ULL) << 24)	|\
			 (((v) & 0x000000000000ff00ULL) << 40)	|\
			 (((v) & 0x00000000000000ffULL) << 56))

#define out_be16(a, v)	out16(a, uswap16(v))
#define out_be32(a, v)	out32(a, uswap32(v))
#define out_be64(a, v)	out64(a, uswap64(v))
#define in_be16(a)	uswap16(in16(a))
#define in_be32(a)	uswap32(in32(a))
#define in_be64(a)	uswap64(in64(a))
#define setbits_be32(a, v)	out_be32((a), in_be32(a) | (v))
#define clrbits_be32(a, c)	out_be32((a), in_be32(a) & ~(c))
#define clrsetbits_be32(a, c, s)	out_be32((a), (in_be32(a) & ~(c)) | (s))

#define i2c_in		in8
#define i2c_out		out8

#ifdef NXP_DDR_BE
#define ddr_in32(a)			in_be32(a)
#define ddr_out32(a, v)			out_be32(a, v)
#define ddr_setbits32(a, v)		setbits_be32(a, v)
#define ddr_clrbits32(a, v)		clrbits_be32(a, v)
#define ddr_clrsetbits32(a, clear, set)	clrsetbits_be32(a, clear, set)
#elif defined(NXP_DDR_LE)
#define ddr_in32(a)			in_le32(a)
#define ddr_out32(a, v)			out_le32(a, v)
#define ddr_setbits32(a, v)		setbits_le32(a, v)
#define ddr_clrbits32(a, v)		clrbits_le32(a, v)
#define ddr_clrsetbits32(a, clear, set)	clrsetbits_le32(a, clear, set)
#else
#error Please define CCSR DDR register endianness
#endif

#ifdef NXP_GUR_BE
#define gur_in32(a)	in_be32(a)
#define gur_out32(a, v)	out_be32(a, v)
#elif defined(NXP_GUR_LE)
#define gur_in32(a)	in_le32(a)
#define gur_out32(a, v)	out_le32(a, v)
#else
#error Please define CCSR GUR register endianness
#endif

#ifdef NXP_SEC_BE
#define sec_in32(a)	in_be32(a)
#define sec_out32(a, v)	out_be32(a, v)
#define sec_in64(addr)  (					\
	((uint64_t)sec_in32((uint32_t *)(addr)) << 32) |	\
	(sec_in32((uint32_t *)(addr) + 1)))
#define sec_out64(addr, val) ({					\
	sec_out32((uint32_t *)(addr), (uint32_t)((val) >> 32));	\
	sec_out32((uint32_t *)(addr) + 1, (uint32_t)(val)); })
#elif defined(NXP_SEC_LE)
#define sec_in32(a)	in_le32(a)
#define sec_out32(a, v)	out_le32(a, v)
#define sec_in64(addr)	(					\
	((uint64_t)sec_in32((uint32_t *)(addr) + 1) << 32) |	\
	(sec_in32((uint32_t *)(addr))))
#define sec_out64(addr, val) ({						\
	sec_out32((uint32_t *)(addr) + 1, (uint32_t)((val) >> 32));	\
	sec_out32((uint32_t *)(addr), (uint32_t)(val)); })
#else
#error Please define CCSR SEC register endianness
#endif

#ifdef NXP_SCFG_BE
#define scfg_in32(a)	in_be32(a)
#define scfg_out32(a, v)	out_be32(a, v)
#define scfg_setbits32(a, v)		setbits_be32(a, v)
#define scfg_clrbits32(a, v)		clrbits_be32(a, v)
#define scfg_clrsetbits32(a, clear, set)	clrsetbits_be32(a, clear, set)
#elif defined(NXP_GUR_LE)
#define scfg_in32(a)	in_le32(a)
#define scfg_out32(a, v)	out_le32(a, v)
#define scfg_setbits32(a, v)		setbits_le32(a, v)
#define scfg_clrbits32(a, v)		clrbits_le32(a, v)
#define scfg_clrsetbits32(a, clear, set)	clrsetbits_le32(a, clear, set)
#else
#error Please define CCSR SCFG register endianness
#endif

#ifdef NXP_QSPI_BE
#define qspi_in32(a)	in_be32(a)
#define qspi_out32(a, v)	out_be32(a, v)
#elif defined(NXP_QSPI_LE)
#define qspi_in32(a)	in_le32(a)
#define qspi_out32(a, v)	out_le32(a, v)
#else
#error Please define CCSR QSPI register endianness
#endif

#define mb()		asm volatile("dsb sy" : : : "memory")

static inline void *ptov(phys_addr_t *ptr)
{
	return (void *)ptr;
}


static inline phys_addr_t *vtop(void *ptr)
{
	return (phys_addr_t *)ptr;
}

#endif /* __IO_H__ */
