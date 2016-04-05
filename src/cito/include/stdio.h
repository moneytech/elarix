/*
 *
 * Carina
 * Header for stdio Library
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

#ifndef __STDIO_H_
#define __STDIO_H_

#include <stdlib.h>

//TODO This is crap
#define FAIL			-1
#define NONE			0
#define OK				1

#define EOF				-1

typedef struct {
	i32		flags;
	string	read_base;
	string	read_ptr;
	string	read_end;
	string	write_base;
	string	write_ptr;
	string	write_end;
	string	buf_base;
	string	buf_end;
	i64		size;
	i64		len;
} file_t;

void info(string msg, i8 status, bool print);
void panic(string reason, u64 err_code);
void status(i8 status, bool print);

void printc(char c);
void printcc(char c, u8 color);

//void printl(const u32 u_int);
//void printlc(const u32 u_int, u8 color);

void prints(string str);
void printsc(string str, u8 color);

//void scanc(const *ptr);

//void scans(string ptr);

#endif
