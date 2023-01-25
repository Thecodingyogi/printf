#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int num = 0;
	va_list args;

	va_start(args, format);
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
			num = write(1, &format[i], 1);
			count += num;
			i++;
			continue;
		if (format[i] == '%')
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
				num = f(args);
				count += num;
				i = i + 2;
				continue;
			if (format[i + 1] != '\0')
				num = write(1, &format[i + 1], 1);
				count += num;
				i = i + 2;
				continue;
			if (format[i + 1] == '\0')
				break;
	}
	return (count);
}
