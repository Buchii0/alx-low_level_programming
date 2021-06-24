#include "holberton.h"
/**
 * print_triangle - prints triangel
 * @size: print size
 * Return: Always 0.
 */

void print_triangle(int size)

{

/*Delcaring statements*/

	int i;
	int z;
	int d;
	int p;

	if (size > 0) /*Start IF*/
	{
		d = size - 1; /*variable temp*/
		for (i = 0; i < size ; i++) /*n times*/
		{
			for (z = d; z > 0 ; z--) /*order descending #*/
			{
				_putchar (' ');
			}

			for (p = 0; p <= i; p++)
			{
				_putchar (35);
			}

			d--;

			_putchar ('\n');

		}

	} /*End IF*/

	else
	{
		_putchar ('\n');
	}
}
