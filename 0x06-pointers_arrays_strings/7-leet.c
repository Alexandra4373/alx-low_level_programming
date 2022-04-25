#include "main.h"

/**
 *  * leet - Function that reverses the content of an array of integers.
 *   *
 *    * @str: s is the array
 *     *
 *      * Return: Always 0.
 *       */

char *leet(char *s)
{
	int i = 0, j = 0;
	char array_leet[] = {'4', '3', '1', '0', '7'};
	char array_up[] = {'A', 'E', 'L', 'O', 'T'};
	char array_low[] = {'a', 'e', 'l', 'o', 't'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == array_low[j] || s[i] == array_up[j])
				s[i] = array_leet[j];
		}
		i++;
	}

	return (s);
}
