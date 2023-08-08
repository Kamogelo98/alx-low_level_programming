#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: the size of arr
 *
 * @c: the specific char.
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}

	return (x);
}
