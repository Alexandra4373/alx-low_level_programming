#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a
 * string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int j = 0, a = _strlen(s1);
	int i = 0, b;
	char *str;

	str = malloc(a + n + 1);
	if (n < (unsigned int) _strlen(s2))
	{
		b = n;
	}
	else
	{
		b = _strlen(s2);
	}
	if (str != NULL)
	{
		for (; j < a; j++)
		{
			str[j] = s1[j];
		}
		for (; i < b; i++)
		{
			str[i + j] = s2[i];
		}
		str[i + j] = '\0';
	}
	else
		return (NULL);
	return (str);
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int var;
	int output = 0;

	if (s != NULL)
	{
		for (var = 0; s[var] != '\0'; var++)
		{
			output += 1;
		}
	}
	return (output);
}
