#include "main.h"
/**
 * number - helps find the square root of natural squareroot numbers
 * @n: natural number starting from1
 * @root: squareroot to be found
 *
 * Return: squareroot of answer
 */
int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
