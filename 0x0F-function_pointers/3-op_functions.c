#include "3-calc.h"

/**
 * op_add - return the suma of a and b
 * @a: int type Integer
 * @b: int type Intger
 * Return: add
 */


int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of a and b
 * @a: int type Integer
 * @b: int type Intger
 * Return: sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of a and b
 * @a: int type Integer
 * @b: int type Intger
 * Return: mul
 */

int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

/**
 * op_div - return the division of a and b
 * @a: int type Integer
 * @b: int type Intger
 * Return: div
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
 * op_mod - return the remainder of the division of a and b
 * @a: int type Integer
 * @b: int type Intger
 * Return: mod
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
