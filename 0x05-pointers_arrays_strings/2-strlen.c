#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check
 * Return: int len
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
