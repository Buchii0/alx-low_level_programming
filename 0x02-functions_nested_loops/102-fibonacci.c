#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */

int main(void)
{
/*Declaring statements*/
long int n;
long int num_1 = 0;
long int num_2 = 1;
long int nextTerm;

for (n = 0; n < 50; ++n) /*Start for*/
{
nextTerm = num_1 + num_2;
num_1 = num_2;
num_2 = nextTerm;

if (n != 49)
{
printf("%ld, ", nextTerm);
}

else
{
printf("%ld\n", nextTerm);
}

} /*End for*/

return (0);
}
