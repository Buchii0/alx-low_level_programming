#include "holberton.h"
/**
 * _strncpy - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes to use.
 * Return: pointer to resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
