#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, num = 0;
	int (*fn)(va_list);
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			num = write(1, &format[i], 1);
			count = count + num;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			fn = check_specifier(&format[i + 1]);
			if (fn != NULL)
			{
				num = fn(args);
				count = count + num;
				i = i + 2;
				continue;
			}
			if (format[i] == '\0')
				break;
			if (format[i] != '\0')
			{
				num = write(1, &format[i], 1);
				count = count + num;
				i = i + 2;
				continue;
			}
		}
	}
	va_end(args);
	return (count);
}
