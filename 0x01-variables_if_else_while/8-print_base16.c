#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int x;
	char lowercase;

	for (x = '0'; x <= '9'; x++)
		putchar(x);

	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
		putchar(lowercase);
	putchar('\n');
	return (0);
}
