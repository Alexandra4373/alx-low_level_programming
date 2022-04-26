#include <stdio.h>

/**
 * print_diagsums - "Adds numbers in a diagonal"
 * @a: array containing characters
 * @size: Size of array levels
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (j = 0, i = size - 1; j < (size * size); j += size + 1, i += size - 1)
		sum1 += a[j], sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
