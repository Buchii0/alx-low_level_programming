#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *@array: array
 *@size: size of the array
 *@cmp:callback function
 * Return: no element matches -1
 **/

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;
	int count;

	if (array != NULL && cmp != NULL)
	{

		i = 1;
		while (i <= size)
		{
			count = cmp(array[i]);
			if (count != 0)
			{
				return (i);
			}

			i++;
		}

	}
	return (-1);

}
