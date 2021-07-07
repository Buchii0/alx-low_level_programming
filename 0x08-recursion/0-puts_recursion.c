#include "holberton.h"
/**
 *_puts_recursion -   prints a string
 *@s: pointer block of memory to fill
 *Return: void
 */

void _puts_recursion(char *s)

{
	/*Base condition*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar (*s); /*print s*/
	_puts_recursion(s + 1); /*Recursion call*/

}
