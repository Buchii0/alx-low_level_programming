#include "holberton.h"

/**
 *puts2 - prints every other character of a string,
 *@str: A pointer to an int that will be updated
 *
 *Return: void
 */

void puts2(char *str)
{
	int i; /*Declaring variables*/

	for (i = 0; str[i] != '\0'; i++) /*Star FOR*/
	{
		if (i % 2 == 0)
		_putchar (str[i]); /*display contents*/
	} /*END FOR*/

	_putchar ('\n');
}
