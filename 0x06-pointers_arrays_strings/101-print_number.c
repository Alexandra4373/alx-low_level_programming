#include "main.h"

/**
 * print_number - print a number using _putchar.
 * @n: the number to be printed.
 */

void print_number(int n)
{
	unsigned int j = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while ((n / j) >= 10)
			j *= 10;
		while (j > 0)
		{
			_putchar((n / j) + '0');
			n %= j;
			j /= 10;
		}
	}
}
