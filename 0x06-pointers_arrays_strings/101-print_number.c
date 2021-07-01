#include "holberton.h"

/**
 * print_number - printing number with puts
 *
 * @n: input int
 */
void print_number(int n)
{
	/*Declaring variables*/
	int count = 0, pow = 1;
	unsigned int num = n;


	if (n < 0) /*Evaluate this condition*/
	{
		_putchar('-');
		num = -n;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	while (count > 1)
	{
		pow *= 10;
		count--;
	}
	while (pow >= 1)
	{
		_putchar(num / pow % 10 + '0');
		pow /= 10;
	}
}
