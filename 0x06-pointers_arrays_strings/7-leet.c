#include <stdio.h>

/**
 * leet - ecodes a string into 1337
 * @str: string to encode.
 *
 * Return: Pointer to the modified string.
 */

char *leet(char *str)
{
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
		}
	}

	return (str);
}
