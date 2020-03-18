#include "holberton.h"

int print_to_binary(va_list args)
{
	unsigned int n;
	int count = 0;

	n = va_arg(args, unsigned int);
	
	count = count + recursive_binary(n);

	return (count);
}

/**
 * print_to_binary - Function assigment args list.
 * @args: Value arguments list.
 *
 * Return: number of binary digits.
*/
int recursive_binary(unsigned int n)
{
	unsigned int module;
	unsigned int recursive = 1;
	int count = 0;

	if (n == 0)
	{
		count++;
		_putchar('\0');
	}
	if (n != 0)
	{
		recursive = n / 2;
		module = n % 2;

		count = count + recursive_binary(recursive);
		if (module != 0)
		{
			count++;
			_putchar('1');
		}
		else
		{
			count++;
			_putchar('0');
		}
	}
	return (count);
}
