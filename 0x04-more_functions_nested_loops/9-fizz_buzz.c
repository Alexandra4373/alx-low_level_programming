#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three, print
 * 'Fizz', for multiples of five print 'Buzz'
 *  And for multiples of both three and five print 'FizzBuzz'
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	printf("Buzz");
	printf("\n");
	return (0);
}
