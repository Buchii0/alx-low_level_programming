#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal.
 *@n: print int
 * Return: Always 0.
 */
void print_line(int n)
{

	/*Delcaring statements*/
	int i;

	if (n > 0) /*Start IF*/
	{
		for (i = 0; i < n; i++) /*Print (_) n times*/
		{
			_putchar (95);
		}

		_putchar ('\n'); /*New line*/

	} /*End IF*/

	else
	{
		_putchar ('\n'); /*New line*/
	}


}
