#include "main.h"

/**
 *  _islower - Checks if character is lowercase
 *
 * @c: Character in ASCII
 *
 * Return: 1 if c is lowercase, Otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
