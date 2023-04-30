#include <stdio.h>
#include "main.h"

/**
 * main - prints name of program
 * @argc: number of argument
 * @argv: an array of a command listed
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
