#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string in reverse, followed by a new line,
 *
 * @s: the parameter
 *
 * Return: on success, the number of characters written
 *         on error, -1 is returned, and errno is set appropriately
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
	{

		_putchar(s[i]);
	}
	_putchar('\n');

}
