#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int i; /*Decarling statement*/

/*for count 0-9 with format ASCII*/
for (i = 48 ; i <= 57; i++)
{
putchar (i); /*print i*/
}

putchar ('\n'); /*new line*/

return (0);

}
