#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints the alphabet in lowercase except q,e
 *
 * Return: 0
 */
int main(void)
{
	char lowercase, e, q;

	e = 'e';
	q = 'q';

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != e && lowercase != q)
			putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
