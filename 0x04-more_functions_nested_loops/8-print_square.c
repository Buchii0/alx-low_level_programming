#include "holberton.h"
/**
 * print_square - prints a square
 *@size: print size
 * Return: Always 0.
 */

void print_square(int size)
{

	/*Delcaring statements*/
	int i;
	int z;

	if (size > 0) /*Start IF*/
	{
		for (i = 0; i < size; i++) /*Print (_) n times*/
		{

			for (z = 0; z < size; z++) /*Start FOR*/
			{
				_putchar (35);
			}
			_putchar ('\n');

		} /*END second FOR*/

	} /*End IF*/

	else
	{
		_putchar ('\n');
	}

}
