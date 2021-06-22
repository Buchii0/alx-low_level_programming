#include <stdio.h>
#define Z 1000000000
/**
 * main - increasing and decreasing until 98
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int a, a1, a2, b, b1, b2, r, r1, r2, i;

a = 1;
b = 2;
r = a + b;

printf("%lu, %lu,", a, b);

for (i = 0; i < 86; i++)
{
printf("%lu", r);
a = b;
b = r;
r = a + b;
}

b1 = b / Z;
b2 = b % Z;
r1 = r / Z;
r2 = r % Z;

for (i = 0; i < 9; i++)
{
printf("%lu%lu,", r1, r2);
a1 = b1;
a2 = b2;
b1 = r1;
b2 = r2;

r1 = a1 + b1 + (a2 + b2) / Z;
r2 = (a2 + b2) % Z;
}

printf("%lu%lu\n", r1, r2);

return (0);

}
