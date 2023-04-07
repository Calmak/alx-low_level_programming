#include "main.h"
/**
 * _strlen1 - checks the lenght of a string
 * @s: the string
 * Return: returns the length of the string
 */
int _strlen1(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen1(s + 1));
}

/**
 * _is_palindrome1 - checks if string is a palindrome
 * @i: is the index
 * @l: length of string
 * @s: the string
 * Return: 1 if palindrome o if not
 */

int _is_palindrome1(int i, int l, char *s)
{
	if (l > 0)
	{
		if (s[i] == s[l])
		{
			return (_is_palindrome1(i + 1, l + 1, s));
		}
		else if (s[i] != s[l])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - returns 1 if a string as a palindrome
 * and 0 if not
 * @s: the strinG
 * Return: 1 if string is palindrome 0 if not
 *
 */

int is_palindrome(char *s)
{
	return (_is_palindrome1(0, _strlen1(s) - 1, s));
}
