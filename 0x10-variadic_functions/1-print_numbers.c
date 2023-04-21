#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: a variable number of numbers to be printed
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		if (!seperator)
		printf("%d", va_arg(nums, int));

		else if (seperator && i == 0)
			printf("%d", va_arg(nums, int));

		else
			printf("%s%d", seperator, va_arg(nums, int));
	}

	va_end(nums);
	printf("\n");
}
