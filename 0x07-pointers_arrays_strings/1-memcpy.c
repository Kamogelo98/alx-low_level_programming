#include <string.h>
#include <stdio.h>

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer to the destination array where the content is to be copied
 *
 * @src: a pointer to the source of data to be copied
 *
 * @n : the number of bytes to be copied.
 *
 * Return: on sucess will return dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (original_dest);
}
