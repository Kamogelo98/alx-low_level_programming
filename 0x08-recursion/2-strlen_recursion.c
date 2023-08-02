#include <stdio.h>

/**
 * _strlen_recursion - uses recursion to calculate len of str
 * @s: pointer
 * Return: lenth of str
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
