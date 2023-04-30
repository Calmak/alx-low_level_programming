#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0(Success), 1(fails)
 */

int main(int argc, char *argv[])
{
	int n, i, change;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	change = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
		{
			change++;
			n -= coins[i];
		}
	}
	printf("%d\n", change);
	return (0);
}
