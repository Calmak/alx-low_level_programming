#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: array name
 * @n: number of elements of array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		_putchar(a[i]);
	}
	if (i == (n - 1))
	{
		_putchar(a[n - 1]);
	}
	_putchar('\n');
}
