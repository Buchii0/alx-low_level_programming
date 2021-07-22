#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *@separator: string to be printed between the strings
 *@n:number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list names;
	unsigned int i;
	char *str;

	va_start(names, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(names, char *);
		if (str != NULL)
		{
			printf("%s", str);
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(names);
	printf("\n");

}
