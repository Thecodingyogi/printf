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
	int num = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);

	while (str[i])
	{
		num = write(1, &str[i], 1);
		count += num;
		i += 1;
	}

	return (count);
}
