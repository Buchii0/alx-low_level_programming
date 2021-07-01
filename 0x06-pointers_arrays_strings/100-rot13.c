#include "holberton.h"
/**
 * rot13 - convert to rot 13
 * @str: input string
 * Return: String conversion
 */
char *rot13(char *str)
{
	int count = 0, x;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[count] != '\0')
	{
		x = 0;
		while (letters[x] != '\0')
		{
			if (str[count] == letters[x])
			{
				str[count] = rot13[x];
				break;
			}
			x++;
		}
		count++;
	}
	return (str);
}
