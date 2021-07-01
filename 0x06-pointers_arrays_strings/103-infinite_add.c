#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * rev_string - reverses a string
 * @s: string s
 */
void rev_string(char *s)
{
	int i = 0;
	int size = _strlen(s);
	char temp;

	while (i < size)
	{
		temp = *(s + i);
		*(s + i) = *(s + size - 1);
		*(s + size - 1) = temp;
		i++;
		size--;
	}
}

/**
 * returnRes - changes pretotal to digit to be added
 * @sum: pre-total
 * @plusOne: flag to add one to res
 * Return: returns digit to be placed into array
 */
int returnRes(int sum, int plusOne)
{
	int res;

	if (sum == 9 && plusOne)
		res = 0;
	else if ((sum >= 10 && plusOne) || (sum < 9 && plusOne))
		res = (sum % 10) + 1;
	else
		res = sum % 10;
	return (res);
}

/**
 * returnPlusOne - determines bool of plusOne
 * @sum: pre-total
 * @plusOne: flag to add one to res
 * Return: 1 if true, 0 if false
 */
int returnPlusOne(int sum, int plusOne)
{
	if (sum > 9)
		plusOne = 1;
	else if (sum == 9 && plusOne)
		plusOne = 1;
	else
		plusOne = 0;
	return (plusOne);
}

/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: size of buffer
 * Return: pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum, res, first, second, i = 0, plusOne = 0;
	int len1 = _strlen(n1), len2 = _strlen(n2);
	char *ptr = r;

	while (len1 > 0 || len2 > 0)
	{
		first = len1 > 0 ? (*(n1 + len1 - 1) - '0') : 0;
		second = len2 > 0 ? (*(n2 + len2 - 1) - '0') : 0;
		sum = first + second;
		res = returnRes(sum, plusOne);
		plusOne = returnPlusOne(sum, plusOne);
		*(ptr + i) = res + '0';
		len1--;
		len2--;
		i++;
	}
	if (plusOne)
		*(ptr + i) = 1 + '0';
	ptr[++i] = '\0';
	rev_string(ptr);
	return ((size_r > _strlen(ptr)) ? ptr : 0);
}
