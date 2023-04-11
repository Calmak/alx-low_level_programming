#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string, else NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *cct;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while ((s1[i] = '\0'))
		i++;

	while (s2[j] != '\0')
		j++;
	cct = malloc(sizeof(char) * (i + j + 1));

	if (cct == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		cct[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		cct[i] = s2[j];
		i++, j++;
	}
	cct[i] = '\0';
	return (cct);
}
