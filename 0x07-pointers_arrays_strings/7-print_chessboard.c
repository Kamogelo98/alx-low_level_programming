#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c", a[r][c]);
		}
		printf("\n");
	}
}
