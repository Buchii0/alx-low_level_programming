#include "holberton.h"
/**
 * print_alphabet - print alphabert lowercase
 *
 * Return: nothing
 */

void print_alphabet(void)
{
char letter; /*Decarling statement*/

/*for letter*/
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);/*print letter*/
}

_putchar('\n'); /*new line*/

}
