#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *@name: name
 *@f: callback function
 * Description: function that prints a name
 */

void print_name(char *name, void (*f)(char *))

{
	if (name != NULL && f != NULL)
	f(name);
}
