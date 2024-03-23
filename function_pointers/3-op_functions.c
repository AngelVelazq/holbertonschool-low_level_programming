#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - input
 * @a: input
 * @b: input
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - input
 * @a: input
 * @b: input
 * Return: void
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - input
 * @a: input
 * @b: input
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - input
 * @a: input
 * @b: input
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - input
 * @a: input
 * @b: input
 * Return: void
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
