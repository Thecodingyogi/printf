#include "main.h"

/**
 * print_char - prints a character
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_char(va_list args)
{
	int count = 0;
	char c = (char)va_arg(args, int);

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}

	return (0);
}
