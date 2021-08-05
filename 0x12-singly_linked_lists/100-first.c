#include <stdio.h>

void print_fun(void) __attribute__ ((constructor));
/**
 * print_fun - print a string
 */

void print_fun(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

