#include "main.h"

/**
 * print_sign - Checks if input number is +ve, 0 or -ve
 *
 * @n: number
 *
 * Return: 1 and prints + if n is > zero, 0 and prints 0 if n is zero,
 * returns -1 and prints - if n is < zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else
	{
		_putchar('0');
		return (0);
	}

	return (n);
}
