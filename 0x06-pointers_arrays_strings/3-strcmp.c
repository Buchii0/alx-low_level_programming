#include "holberton.h"
/**
 *_strcmp -  compares two strings
 *@s1: A pointer to an char that will be updated
 *@s2: A pointer to an char that will be updated
 *Return: dest
 */

int _strcmp(char *s1, char *s2)

{

	char *str_one = s1; /*Declaring pointer*/
	char *str_two = s2;

	/*WHILE*/
	while (*str_one != '\0' && *str_two != '\0' &&  *str_one == *str_two)
	{
		str_one++; /*Add string one and string two*/
		str_two++;
	}

	return (*str_one - *str_two);
}
