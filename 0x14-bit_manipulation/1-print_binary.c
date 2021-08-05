#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n:  number to convert binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_num_binary(n);
}

/**
 * print_num_binary -  Prints the binary representation of a number
 * @n: Number to convert binary
 * Return: void
 */
void print_num_binary(unsigned long int n)
{
	if (n == 0)
		return;
	print_num_binary((n >> 1));
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
