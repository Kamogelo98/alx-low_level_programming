#include "main.h"

/**
 * more_numbers - print numbers form zero to 14 ten times
 * Return: printing the nums
 */

void more_numbers(void)
{
	int k;

	int m = 0;

	while (m <= 9)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');
		}

		m++;
		_putchar('\n');
	}
}
