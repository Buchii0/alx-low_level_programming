#include "holberton.h"
/**
 * print_times_table  -prints tables
 *@n: print int
 * Return: nothing
 */
void print_times_table(int n)
{
int a, b, c; /*Declaring statements*/
if (n < 16 && n > -1)
{
for (a = 0; a <= n; a++)/*First for*/
{
for (b = 0; b <= n; b++)/*Secondo for*/
{
c = a * b;/* multiplication a*b*/
if ((c / 10) == 0)/*If the first digit is 0*/
{
if  (b == 0)
{ _putchar ('0');
}
if (b != 0)/*print if b is different 0*/
{
_putchar (' ');
_putchar (' ');
_putchar ((c % 10) + '0');
}
} /*End the first IF*/
else if ((c / 10) <= 9 && ((c % 10) <= 9))/*print to 99*/
{
_putchar (' ');
_putchar ((c / 10) + '0');
_putchar ((c % 10) + '0');
} /*End ELSE IF*/
else/*print from 100*/
{
_putchar ((c / 100) + '0');
_putchar (((c / 10) % 10)  + '0');
_putchar ((c % 10) + '0');
} /*End ELSE*/
if (b < n) /*don't print the last (;)*/
{
_putchar(',');
_putchar (' ');
}
} /*End second FOR*/ _putchar ('\n');
} /*End first FOR*/
}
} /*End int main*/
