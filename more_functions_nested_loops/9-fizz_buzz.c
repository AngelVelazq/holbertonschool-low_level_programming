#include <stdio.h>
/**
 * main - print 1 to 100 and fizzbuzz
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
		printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
		printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
		printf("Buzz ");
		}
		else
		{
		printf("%d ", num);
		}
	}
	printf("Buzz");
	printf("\n");

	return (0);
}
