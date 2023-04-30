#include <stdlib.h>
#include "main.h"
/**
 * count_word - count the number of words in a string
 * @s: string
 * Return: number of words
 */

int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;

			c++;
		}
	}
	return (c);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings(success)
 * or NULL (Fail)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j, len, words, c, start, end;

	j = 0;
	len = 0;
	c = 0;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[j] = NULL;

	return (matrix);
}
