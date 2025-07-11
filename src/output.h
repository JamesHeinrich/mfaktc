/*
This file is part of mfaktc.
Copyright (C) 2009, 2010, 2011, 2012, 2015  Oliver Weihe (o.weihe@t-online.de)

mfaktc is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

mfaktc is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
                                
You should have received a copy of the GNU General Public License
along with mfaktc.  If not, see <http://www.gnu.org/licenses/>.
*/

#if defined(NVCC_EXTERN) && !defined(_MSC_VER)
extern "C" {
#endif
void print_help(char *string);
#ifdef __GNUC__
__attribute__ ((format(printf, 2, 3)))
#endif
void logprintf(mystuff_t *mystuff, const char *fmt, ...);

void print_dez96(int96 a, char *buf);
void print_dez192(int192 a, char *buf);

int96 parse_dez96(char *str);

void print_status_line(mystuff_t *mystuff);
void print_result_line(mystuff_t *mystuff, int factorsfound);
void print_factor(mystuff_t *mystuff, int factor_number, char *factor);
double primenet_ghzdays(unsigned int exp, int bit_min, int bit_max);
#if defined(NVCC_EXTERN) && !defined(_MSC_VER)
}
#endif
