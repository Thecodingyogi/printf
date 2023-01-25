#include "main.h"

/**
 * check_specifier - check that a character is a valid specifier and
 * assigns appropriate function
 * @format: the specifier
 *
 * Return: pointer to a function, NULL if not successful
 */

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[4] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}

	return (NULL);
}
