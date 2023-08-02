#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input value
 * @start: input value
 * @end: input value
 * Return: sqrt
 */

int _sqrt_recursion(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	}

	if (start * start == n)
	{
		return (start);
	}

	return (_sqrt_recursion(n, start + 1, end));
			}
