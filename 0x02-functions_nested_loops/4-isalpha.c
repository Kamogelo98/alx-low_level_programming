#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic char
 * @c: The char to check
 * Return: 1 alphabetic char else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
