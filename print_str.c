#include "main.h"

/**
 * print_str - prints a string
 * @args: variadic parameter
 *
 * Return: number of characters printed, otherwise -1
 */

int print_str(va_list args)
{
	int i = 0;
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);

	while (str[i])
	{
		count = write(1, &str[i], 1);
		i += 1;
	}

	return (count);
}
