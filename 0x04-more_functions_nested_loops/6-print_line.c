#include "main.h"

/**
 * print_line - for draw straight line in the terminal
 * @n: the input of the function
 * Return: return success
 */

void print_line(int n)
{
	int k = 1;

	while (k <= n)
	{
		_putchar('_');
		k++;
	}
	_putchar('\n');
}
