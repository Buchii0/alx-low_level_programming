#include "holberton.h"
/**
 * print_diagonal - prints diagonal line
 *@n: print int
 * Return: Always 0.
 */
void print_diagonal(int n)
{

/*Delcaring statements*/
	int i;
	int z;

	if (n > 0) /*Start IF*/
	{
		for (i = 0; i < n; i++) /*Print (_) n times*/
		{
			for (z = 0; z < i ; z++) /*Print (_) * Second IF*/
			{
				_putchar (' ');
			} /*End second IF*/
			_putchar (92);
			_putchar ('\n'); /*New line*/

		}

	} /*End IF*/

	else
	{
		_putchar ('\n');
	}

}
