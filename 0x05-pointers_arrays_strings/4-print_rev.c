#include "holberton.h"
/**
 * print_rev - prints a string rev
 *@s: A pointer to an int that will be updated
 *
 *Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0') /*Count character of string*/
	{
		i++;
	}

	for (i = i - 1 ; i >= 0; i--) /*print charcter by character*/
	{
		_putchar (s[i]);
	}

	_putchar ('\n');
}
