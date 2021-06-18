#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
char lower_case; /*Decarling statement*/
char upper_case;

/* for lower case*/
for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
putchar(lower_case);
}

/*for upper case*/
for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar(upper_case);
}

/*new line*/
putchar ('\n');

return (0);

}
