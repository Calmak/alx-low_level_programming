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
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = xor >> i;
		if (num & 1)
			count++;
	}
	return (count);
}
