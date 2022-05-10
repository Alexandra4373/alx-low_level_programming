#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min value.
 * @max: max value.
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min;

	arr = malloc((size + 1) * sizeof(int));

	if (arr == 0)
		return (NULL);
								for (i = 0; i <= size; i++)
								{
									arr[i] = min;
									min++;
								}		
								return (arr);
}
