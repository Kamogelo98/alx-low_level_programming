#include <stdio.h>
#include <math.h>
/**
 * is_prime_number - checks if a given int is a prime num
 * @n: given int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	int i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0);
		}
		i += 6;
	}
	return (1);
}
