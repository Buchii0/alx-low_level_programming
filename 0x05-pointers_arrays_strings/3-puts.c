#include "holberton.h"
/**
 *_puts - prints a string
 *@str: A pointer to an int that will be updated
 *
 *Return: void
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++) /*Count character by character*/
	{
		_putchar (c[m]);

	} /*End for*/
	_putchar('\n');
}
