#include "holberton.h"
/**
 * print_to_numbers - prints an integer in %i and %d format.
 * @i: int to print
 * Return: count of the digits printed.
 */

int print_to_numbers(va_list args)
{
	int mod, num, n;
	int digits = 0;

	mod = 1;
	n = (va_arg(args, int));
	num = n;

	if (n < 0)
	{
		_putchar('-');
		digits++;
	}
	for (; num / 10 != 0; num /= 10)
		mod = mod * 10;
	while ((mod != 1) && (n / mod != 0))
	{
		_putchar(abs((n / mod)) + 48);
		digits++;
		n = n % mod;
		if (mod > 1)
			mod = mod / 10;
		while ((abs(n) < mod) && (mod > 1))
		{
			_putchar('0');
			digits++;
			mod = mod / 10;
		}
	}
	_putchar(abs(n) + 48);
	return (digits + 1);
}
