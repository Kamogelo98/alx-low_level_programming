#include "main.h"

/**
 * print_square -  function that prints a square, followed by a new line
 * @size: The square's size
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		while (x < size)
		{
			while (y < size)
			{
				y++;
				_putchar('#');
			}
			if (x == size - 1)
				continue;
			_putchar('\n');
			x++;
		}
	}
	_putchar('\n');
}
