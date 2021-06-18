#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
char base_16; /*Decarling statement*/

/*for base 16 0-9*/
for (base_16 = 48; base_16 <= 57; base_16++)
{
putchar(base_16); /*print 0-9*/
}

/*for base 16 a-f*/
for (base_16 = 97 ; base_16 <= 102; base_16++)
{
putchar(base_16); /*print a-f*/
}

putchar ('\n'); /*print new line*/

return (0);

}
