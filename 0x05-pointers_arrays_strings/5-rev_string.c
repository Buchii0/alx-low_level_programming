#include "holberton.h"
/**
 * rev_string - prints a string rev
 *@s: A pointer to an int that will be updated
 *
 *Return: void
 */

void rev_string(char *s)
{
	/*Declcaring variables*/
	char *start_c, *end_c, c;
	int i, count;
	int length = 0;

	for (i = 0; s[i]; i++) /*Count character by character*/
	{
		length++;
	} /*End for*/

	count = length; /*Count each character of string*/

	/*Start_c and end_c is equal value of variable s*/
	start_c = s;
	end_c = s;

	/*Move the end_c to the last character*/
	for (i = 0; i < count - 1; i++)
	{
		end_c++;
	}

	/* Swap the char from start and end */
	/* index using begin_ptr and end_ptr */
	for (i = 0; i < count / 2; i++)
	{

		/*swap character*/
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		/* update pointers positions*/
		start_c++;
		end_c--;
	}
}
