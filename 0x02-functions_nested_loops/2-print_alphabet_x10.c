#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
int alphabet; /*Declaring statements*/
int count;

count = 0;
while (count < 10) /*Start while */
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++) /*start for*/
{
_putchar(alphabet);
} /*end for*/

count++;
_putchar('\n'); /*new line*/
} /*end while*/


}
