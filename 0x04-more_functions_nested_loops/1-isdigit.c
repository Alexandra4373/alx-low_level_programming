#include "main.h"

/**
 * _isdigit - Checks if it's a digit
 * @c: Character/digit
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
