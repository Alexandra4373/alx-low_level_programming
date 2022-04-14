#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: Character
 * Return: 1 if c if uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
