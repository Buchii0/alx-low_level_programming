#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
char letter; /*Decarling statement*/

/*for z-a*/
for (letter = 122 ; letter >= 97; letter--)
{
putchar(letter);
}

putchar('\n'); /*new line*/

return (0);

}
