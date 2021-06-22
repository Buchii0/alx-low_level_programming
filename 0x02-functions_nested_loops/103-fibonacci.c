#include <stdio.h>
#include <stdlib.h>
#define n 4000000

/**
 * main - print fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
/*Declaring statements*/
unsigned long num_1, num_2, num_3;
unsigned long result;

result = 0;
num_1 = 1;
num_2 = 2;

/*Start While*/
while (num_1 <= n)
{
if (num_1 % 2 == 0)
{
result += num_1;
}
num_3 = num_2;
num_2 = num_1 + num_2;
num_1 = num_3;
} /*End While*/

printf("%lu\n", result); /*Print result*/
return (0);
}
