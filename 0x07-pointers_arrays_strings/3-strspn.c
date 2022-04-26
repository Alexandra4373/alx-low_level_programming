#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: String to check
 * @accept: String that checks
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a_length = 0, length = 0;

	while (accept[a_length] != '\0')
		a_length++;
	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < a_length; j++)
			if (s[i] == accept[j])
				length++, j = a_length;
			else
				if (j == a_length - 1)
					goto exit;
exit: return (length);
}
