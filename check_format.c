#include "holberton.h"
#include <stdio.h>

/**
 * *get_ptn_fcn - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
int (*get_ptn_fcn(const char *format))(va_list)
{

	unsigned int i = 0;
	prtop ops[] = {
		{"c", print_to_c},
		{"d", print_to_numbers},
		{"i", print_to_numbers},
		{"s", print_to_string},
		{"b", print_to_binary},
		{NULL, NULL}
	};

	for (i = 0; ops[i].spec != NULL; i++)
	{
		if (*(ops[i].spec) == *format)
		{
			break;
		}
	}
	return (ops[i].f);
}
