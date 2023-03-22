#include "main.h"

/**
 * print_last_digit - printsthe last digit of a number
 * @i: function parameter
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int ld;

	ld = i % 10;
	if (i < 0)
		ld = -ld;
	_putchar(ld + '0');
	return (ld);
}
