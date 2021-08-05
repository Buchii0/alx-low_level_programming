#include "holberton.h"

/**
 * binary_to_uint  - converts a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 * Return:   converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int num = 0;
	int i;

	/* if string is empty return 0 */
	if (b == NULL)
		return (0);

	/* return if the value is different to 0 or 1*/
	for (i = 0; b[i] != '\0'; i++)
		if (b[i]  != '0' && b[i] != '1')
			return (0);

	/* converter array the number binary to  int */
	for (i = 0; b[i] != '\0'; i++)
	{
		num *= 2;
		if (b[i] == '1')
			num += 1;
	}
	return (num);



}

