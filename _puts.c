#include "holberton.h"
/**
 * _puts - prints a string followed by a new line.
 * @s: pointer parameter to a char type.
 * Return: void.
 */
void _puts(char *s)
{
	int c;

	for (c = 0; *(s + c) != '\0'; c++)
	{
		_putchar(*(s + c));
	}
}
