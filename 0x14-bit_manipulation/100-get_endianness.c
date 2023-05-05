#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if big endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *a = (char *) &i;

	return (*a);
}
