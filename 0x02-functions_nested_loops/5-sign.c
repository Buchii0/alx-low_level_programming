#include "holberton.h"
/**
 * print_sign - return 0 letter not lowercase, 1 letter lowercase
 *
 *@n: The int to print
 * Return: Returns 1 (print +) n>0, returns 0 (is 0) n=0, returns -1 (-) n<0
 */
int print_sign(int n)
{

if (n > 0)
{
_putchar ('+');
return (1);
}

else if (n == 0)
{
_putchar ('0');
return (0);
}

else
{
_putchar ('-');
return (-1);
}

}
