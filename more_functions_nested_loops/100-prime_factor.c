#include <stdio.h>
/**
 * main - find a print the prime of a number
 * n - is the number
 */
int main(void)
{
	long int i, n, d;

	n  = 612852475143;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
			printf("%ld\n", i);
			break;
			}
			d = n / i;
			n = d;
		}
	}
	return (0);
}
