#include <stdio.h>
/**
 * main - increasing and decreasing until 98
 *
 * Return: Always 0.
 */

int main(void)
{
int i, result; /*Delcaring statements*/

i = 0;
result = 0;
/*Start While*/
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0) /*Start condition IF*/
result += i;
i++;
} /*END condition IF*/

printf("%d\n", result);
return (0);
}
