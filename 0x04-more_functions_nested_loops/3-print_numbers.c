#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints numbers from
 * 0-9
 * Return: retuns nothing
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
