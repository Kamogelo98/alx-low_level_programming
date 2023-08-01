#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer
 * @size: int
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - 1 - i);
	}
	printf("sum of sum1: %d\n", sum1);
	printf("sum of sum2: %d\n", sum2);
}
