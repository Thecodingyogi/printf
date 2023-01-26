#include "main.h"

/**
 * check_specifier - check that a character is a valid specifier and
 * assigns appropriate function
 * @format: the specifier
 * Return: pointer to a function, NULL if not successful
 */

int (*check_specifier(const char *format))(va_list)
{
	int i;

	fmt_t fmt_types[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_cent},
		{'\0', NULL}};

	for (i = 0; fmt_types[i].fmt != '\0'; i++)
	{
		if ((fmt_types[i].fmt) == *format)
		{
			return (fmt_types[i].fn);
		}
	}

	return (NULL);
}
