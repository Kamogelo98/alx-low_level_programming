#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times the \ character is printed
 *
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < n; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
