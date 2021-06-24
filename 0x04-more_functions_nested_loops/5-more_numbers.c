#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i; /*Declaring statements*/
	int first_num;
	int second_num;
	int result;

	i = 0; /*count*/
	result = 0;
	while (i < 10)/*Start first While*/
	{
		while (result <= 14) /*Start secondo While*/
		{
			if (result < 10) /*swap*/
			{
				second_num = result;
			}

			else /*print num > 9*/
			{
				first_num = result / 10;
				second_num = result % 10;
				_putchar (first_num + '0');
			}

			_putchar (second_num + '0');

			result++;
		}
		i++;
		result = 0; /*reset count*/
		_putchar ('\n'); /*new line*/
	}

}
