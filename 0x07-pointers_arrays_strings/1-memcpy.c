#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: number of bytes from memory area
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	return (dest);
}
