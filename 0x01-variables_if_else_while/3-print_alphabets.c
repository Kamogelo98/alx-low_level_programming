#include <stdio.h>
/**
 * main -  program that prints the alphabet in lowercase and  uppercase
 *
 * Return: 0
 */
int main(void)
{
	char l;

	char u;

	l = 'a';
	u = 'A';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
