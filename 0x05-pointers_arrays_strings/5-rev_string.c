#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * @O: integer
 * Return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int O;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (O = longi; O > 0; O--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
