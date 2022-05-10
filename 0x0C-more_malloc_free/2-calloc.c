#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements to be allocated
 * @size: size
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(memory + i) = 0;
	return ((void *)memory);
}
