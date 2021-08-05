#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to check the value of
 * @index: the index to look for the number
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number = *n;

	if (index > sizeof(8) * 8)
		return (-1);

	number |= (1 << index);

	*n = number;

	return (1);
}
