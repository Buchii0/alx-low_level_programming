#include "holberton.h"

/**
 * get_endianness - checks if computer is big or little edian
 * Return: 0 if big edian and 1 if little edian
 */

int get_endianness(void)
{
	char num;
	char *ptr;

	num = '1';
	ptr = &num;
	if (*ptr == 0)
		return (0);
	else
		return (1);
}
