#include "variadic_functions.h"

/**
 * print_c - prints char
 * @list: arguement char
 * @separator: seperator
 */

void print_c(va_list list, char *separator)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
 * print_i - prints int
 * @list: arguement of list
 * @s: seperator
 * Return: none
 */

void print_i(va_list list, char *s)
{
	printf("%s%d", s, va_arg(list, int));
}

/**
 * print_f - prints floats
 * @separator: float to print
 * @list: next arguement of list to print
 * Return: none
 */

void print_f(va_list list, char *separator)
{
	printf("%s%f", separator, va_arg(list, double));
}

/**
 * print_s - prints string
 * @separator: seperator
 * @list: list to print
 * Return: none
 */

void print_s(va_list list, char *separator)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s%s", separator, s);
}


/**
 * print_all - prints out all stuff
 * @format: format is list of types of arguements
 */

void print_all(const char * const format, ...)
{
	va_list list;
	char *separator;
	int i, j;

	/*Declaring struct*/
	format_type fm[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	/* initialize valist for num number of arguments */
	va_start(list, format);

	separator = "";

	/*Start WHILE*/
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0; /*Reset variable j*/
		while (j < 4) /*WHILE for data type*/
		{
			if (format[i] == *(fm[j]).fm) /*Search match*/
			{
				fm[j].p(list, separator);/*Assign values*/
				separator = ", ";

			}
			j++;
		}
		i++;
	} /*End WHILE*/
	printf("\n");/*New line*/
	va_end(list); /* clean memory reserved for valist */
}
