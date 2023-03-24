#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * for multiples of both three and five print FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; 1 <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
