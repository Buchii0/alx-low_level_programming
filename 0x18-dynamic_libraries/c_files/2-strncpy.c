#include "holberton.h"
/**
 * _strncpy - functiono that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;
	for (a = 0; src[a] != '\0' && a < n; a++)
		dest[a] = src[a];
	while (a < n)
		dest[a++] = '\0';
	return (dest);
}
