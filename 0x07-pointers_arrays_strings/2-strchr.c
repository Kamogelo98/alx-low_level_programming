#include <stdio.h>

/**
 * _strchr - locates a char in a string
 * @s: pointer to string
 * @c: char to locate
 * Return: Pointer or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
