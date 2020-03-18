#include "holberton.h"
#include <stdlib.h>
/**
 * _printf - Prints according to a format specified
 * @format: conts char * argument
 *
 * Return: length of printed character
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0;
	va_list args;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			i++;
			len++;
		}
		if (!format[i])
		{
			return (len);
		}
		f = get_ptn_fcn(&format[i + 1]);
		if (f != NULL)
		{
			len = len + f(args);
			i = i + 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		len++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (len);
}
