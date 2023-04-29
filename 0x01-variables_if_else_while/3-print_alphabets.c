#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphABET in lower and then upper case
 * Return: Aways 0
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(alpha[a]);
	}

	putchar('\n');
	return (0);
}
