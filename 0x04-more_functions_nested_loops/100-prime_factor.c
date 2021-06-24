#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */

int main(void)

{
	long n, i; /*Declaring statements*/

	n = 612852475143;
	for (i = 2; i < n; i++) /*Start FOR*/
	{
		while (n % i == 0)
			n = n / i;
	} /*End For*/

	printf("%lu\n", n); /*Print new line*/

	return (0);
}
