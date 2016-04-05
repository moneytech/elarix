/*
 *
 * Carina
 * stdlib Library
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

#include <stdlib.h>
#include <string.h>

string itoa(u64 num, const u32 base) //FIXME No support for negative integers
{
	static char str[22];
	i32 i = 0;

	if (num == 0) {
		str[i++] = '0';
		str[i] = '\0';
		return str;
	}

	while (num != 0) {
		i32 rem = num % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}

	str[i] = '\0';

	return strrev(str);
}

//void *malloc_zone(

/*void *malloc(u64 size)
{

}*/
