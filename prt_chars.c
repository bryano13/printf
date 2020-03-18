#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_c - print char that enter as parameter
 * @c: va_list argument
 * Return: length of list
 */
int print_to_c(va_list c)
{
	char s = va_arg(c, int);

	_putchar(s);
	return (1);
}

/**
 * _strlen - finds the lenght of a string.
 * @s: a sting.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_to_string - print string that enter as parameter
 * @s: va_list argument
 * Return: length of list
 */
int print_to_string(va_list s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(null)";
	_puts(string);
	return (_strlen(string));
}
