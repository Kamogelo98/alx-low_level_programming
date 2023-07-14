#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
		putchar(lowercase);
	putchar('\n');
	return (0);
}
