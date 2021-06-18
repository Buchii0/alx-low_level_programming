#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
char letter; /*Decarling statement*/

/*for letter*/
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q') /*continue if is q*/
continue;

else if (letter == 'e')/*continue if is q*/
continue;

putchar(letter);/*print letter*/
}

putchar('\n'); /*new line*/

return (0);

}
