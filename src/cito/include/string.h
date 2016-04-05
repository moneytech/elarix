/*
 *
 * Carina
 * Header for string Library
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

#ifndef __STRING_H_
#define __STRING_H_

#include <stdlib.h>

#define NULL			((void *) 0)

/* Copying */
void *memcpy(void *dest, void *src, u64 len);
//void *memmv(void *dest, void *src, u64 len);
string strcpy(string dest, string src);

/* Concatenation */
string strcat(string dest, string src);

/* Searching */
//void *memchr(const void *s, i32 c, u64 len);

/* Other */
void *memset(void *dest, i32 src, u64 len);
u64 strlen(string str);
string strrev(string str);

#endif
