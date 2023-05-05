#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: number 1
 * @m: number 2
 * Return: the number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;
	unsigned long int num;
	unsigned long int exc = n ^ m;

	for (i = 53; i >= 0; i--)
	{
		num = exc >> i;
		if (num & 1)
			count++;
	}
	return (num);
}
