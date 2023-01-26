#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024



int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);

/**
 * struct fmt - struct for specifier to print
 * @fmt: The format
 * @fn: function to handle printing
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list);
};

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format
 * @fm_t: The function associated
 */
typedef struct fmt fmt_t;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_int(va_list);
int print_dec(va_list);

#endif
