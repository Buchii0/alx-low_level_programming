#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @str: character to be checked
 * Return: if seperator return 1. Otherwise return 0;
 */
char *leet(char *str)
{
	/*Declaring variables*/
	int count = 0, i = 0;
	char *letters = "aeotlAEOTL";
	char *nums = "4307143071";

	/*Start WHILE*/
	while (str[count] != '\0')
	{
		i = 0;
		while (letters[i] != '\0') /*Evaluate all cases*/
		{
			if (str[count] == letters[i]) /*Match between string a letters*/
				str[count] = nums[i];
			i++;
		}
		count++; /*Add count*/
	} /*End WHILE*/

	return (str);
}
