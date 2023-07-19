#include <stdio.h>

/**
 * main - Program that finds, prints sum of even-valued terms
 *
 * Return: Always 0.
 */
int main(void)
{
	long int x, y, z, afn;

	x = 1;
	y = 2;
	z = afn = 0;
	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if ((x % 2) == 0)
		{
			afn = afn + x;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
