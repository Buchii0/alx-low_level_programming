#include "holberton.h"
/**
 * times_table -prints tables
 * Return: nothing
 */
void times_table(void)
{
int a; /*Declaring statements*/
int b;
int c;
for (a = 0; a <= 9; a++)/*First for*/
{
for (b = 0; b <= 9; b++) /*Secondo for*/
{
c = a * b; /* multiplication a*b*/
if ((c / 10) == 0) /*If the first digit is 0*/
{
if (b == 0)
{
_putchar ('0');
}
if (b != 0)
{
_putchar (' ');
_putchar ((c % 10) + '0');
}
if (b < 9) /*don't print the last (;)*/
{
_putchar(',');
_putchar (' ');
} /*End second IF*/

} /*End the first IF*/
else
{

_putchar ((c / 10) + '0');
_putchar ((c % 10) + '0');
if (b < 9) /*don't print the last (;)*/
{
_putchar(',');
_putchar (' ');
}
} /*End ELSE*/
} /*End second FOR*/
_putchar ('\n');
} /*End first FOR*/
}
