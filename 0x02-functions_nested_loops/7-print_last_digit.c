#include "main.h"
/**
 * print_last_digit - it describe it self
 * @i: the input to print it last digit
 * Return: the last digit of the number
 */

int print_last_digit(int i)
{
	int lastDigit;

	lastDigit = i % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
