#include "holberton.h"
/**
 *_strncat -  concatenates two strings
 *@dest: A pointer to an char that will be updated
 *@src: A pointer to an char that will be updated
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	while (dest[i] != '\0') /*WHILE count character */
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0') /*WHILE concatenate dest with src*/
	{
		dest[i] = src[j];
		j++;  /*sum j*/
		i++; /**sum i*/
	}

	dest[i] = '\0'; /*the terminating null byte*/

	return (dest);
}
