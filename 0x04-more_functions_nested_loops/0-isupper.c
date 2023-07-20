#include "main.h"

/**
 * _isupper - checks if a char is uppercase
 * @c: char to be tested
 * Return: 1 uppercase else 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
