#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */
int main(void)

{
int i; /*Declaring statements*/
char string[9] = "Holberton"; /*Arrays*/

for (i = 0 ; i < 9 ; i++) /*Start for*/
{
_putchar(string[i]);/*display word*/
} /*End for*/

_putchar('\n');

return (0);

}
