#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{

	int n = 100; /*Delcaring statements*/
	int i;

	i = 1;
	while (i <= n) /*Start While*/
	{
		if (i % 3 == 0 && i % 5 == 0) /*Multple 3 and 5*/
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0) /*Muitple 3*/
		{
			printf("Fizz ");
		}

		else if (i % 5 == 0) /*Multple 5*/
		{
			if (i < n)
			printf("Buzz ");

			else
				printf("Buzz");
		}

		else
		{
			printf("%i ", i); /*Print i*/
		}

		i++;


	}
	printf("\n"); /*New line*/
	return (0);
}
