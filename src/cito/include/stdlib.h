/*
 *
 * Carina
 * Header for stdlib Library
 *
 * Copyright (C) 2015 Bastiaan Teeuwen <bastiaan.teeuwen170@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 *
 */

#ifndef __STDLIB_H_
#define __STDLIB_H_

/* Boolean */
//typedef enum {
//	false = 0,
//	true = 1
//} bool;

/* Signed Data Types */
typedef signed char		i8;
typedef signed short	i16;
typedef signed int		i32;
typedef signed long long	i64;

/*typedef int_least8_t	il8;
typedef int_least16_t	il16;
typedef int_least32_t	il32;
typedef int_least64_t	il64;

typedef int_fast8_t		if8;
typedef int_fast16_t	if16;
typedef int_fast32_t	if32;
typedef int_fast64_t	if64;*/

/* Unsigned Data Types */
typedef unsigned char	u8;
typedef unsigned short	u16;
typedef unsigned int	u32;
typedef unsigned long long	u64;

/*typedef uint_least8_t	ul8;
typedef uint_least16_t	ul16;
typedef uint_least32_t	ul32;
typedef uint_least64_t	ul64;

typedef uint_fast8_t	uf8;
typedef uint_fast16_t	uf16;
typedef uint_fast32_t	uf32;
typedef uint_fast64_t	uf64;*/

/* Floating-Point Types */
typedef float			f32;
typedef double			f64;

/* Other Data Types */ //TODO In types.h
typedef u64				fsize_t;		/* Used for file sizes */
typedef i64				rint_t;			/* Used for function return values */
typedef u64				time_t;			/* Used for time in seconds */

//UUID //TODO In uuid.h
#define UUID_SIZE		16
typedef u8				uuid_t[16];		/* Used for UUIDs */
//UUID

/* String */
typedef char*			string;

/* Type conversion */
string itoa(u64 num, const u32 base);
//u64 strtol(const string *str, string *ptr, u32 base);

/* Pseudo-random sequence generation */

/* Memory allocation and deallocation */
#define HEAP_SIZE		(1 * 1024 * 1024)

//void *heap = NULL;
//void 

void *malloc(u64 size);
//void *calloc(u64 src, u64 size);
//void *realloc(void *ptr, u64 size);
//void free(void *);

/* Process control */

/* Sorting, searching and comparison */

/* Mathematics */ //XXX Only here for compliance (f* that), move to math.h

#endif
