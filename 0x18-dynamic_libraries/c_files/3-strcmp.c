#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s1: 1st string to compare
 * @s2: 2nd string to compare
 * Return: difference between strings
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a]; a++)
		;
	return (s1[a] - s2[a]);
}
