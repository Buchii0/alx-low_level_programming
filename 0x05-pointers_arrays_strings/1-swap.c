#include "holberton.h"

/**
 * swap_int - swap between a and b
 *@a: A pointer to an int that will be updated
 *@b: B pointer to an int that will be updated
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int z; /*Declaring variables*/

	z = *a;  /*Z value a*/
	*a = *b;  /*a value of b*/
	*b = z; /*b value of a*/
}
