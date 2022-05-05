#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 */

char *_strdup(char *str)
{
	char *strCopy;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strCopy = malloc(sizeof(*str) * i);
	if (strCopy == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strCopy[j] = str[j];
		j++;
	}
	return (strCopy);
}
