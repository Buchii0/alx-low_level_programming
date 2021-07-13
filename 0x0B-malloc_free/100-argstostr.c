#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, total;
	int m = 0;
	char *ptr;

	if (!ac || !av)
		return (NULL);
	total = 0;
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]) + 1;
		total += len;
	}
	ptr = malloc(sizeof(char) * total + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		for (j = 0; j < len; j++, m++)
		{
			ptr[m] = av[i][j];
		}
		ptr[m++] = '\n';
	}
	ptr[m] = '\0';
	return (ptr);
}
