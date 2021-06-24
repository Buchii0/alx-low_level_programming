#include "holberton.h"
/**
 * print_most_numbers - print numbers
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{

	int i; /*Declaring statements*/

	i = 0;
	while (i < 10)/*Start While*/
	{
		if (i != 2 && i != 4) /* No print 2 and 4*/
		{
			_putchar (i + '0'); /*print value i*/
		}
		i++;
	}

	_putchar ('\n'); /*New line*/
}
