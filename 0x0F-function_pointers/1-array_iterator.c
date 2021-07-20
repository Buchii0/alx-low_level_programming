#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that prints a name.
 *@array: array
 *@size: size of the array
 *@action:callback function
 * Description: function that prints a name
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{

	size_t i;

	if (array != NULL && action != NULL)

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}

}
