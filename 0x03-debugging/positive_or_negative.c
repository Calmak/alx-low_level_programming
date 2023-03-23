#include "main.h"
/**
 * positive_or_negative - test if a number is positive or negative
 * @i: number to be checked
 *
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
