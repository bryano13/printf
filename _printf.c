#include "holberton.h"
#include <stdio.h>
/**
 * _printf - Prints according to a format specified
 * @format: conts char * argument
 * Return: length of printed character
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			len++;
			i++;
		}
		if (format[i] == '\0')
			return (len);
		f = get_ptn_fcn(&format[i + 1]);
		if (f)
		{
			len = len + f(args);
			i = i + 2;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		_putchar(format[i]);
		len++;
		if (format[i + 1] == '%')
			i = i + 2;
		else
			i++;
	}
	va_end(args);
	return (len);
}
