#include "holberton.h"

/**
 * flip_bits - the number flip to get from one number to another
 * @n: number
 * @m: number
 * Return: return count of flipped number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int number;

	number = n ^ m;
	while (number > 0)
	{
		if ((number & 1) == 1)
			count++;
		number >>= 1; /*is the same n = n >>1*/
	}
	return (count);

}
