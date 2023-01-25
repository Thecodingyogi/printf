#include "main.h"

/**
 * print_cent - prints a character %
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_cent(va_list args)
{
	(void)args;
	return (write(1, "%%", 1));
}
