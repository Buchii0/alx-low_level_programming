#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int left; /*Decarling statement*/
int right;
int center;

/*for 0-9 with ASCII*/

for (left = 48; left <= 57; left++)
{
for (center = left + 1; center <= 57; center++)
{
for (right = center + 1 ; right <= 57; right++)

{

putchar(left); /*print  numbers left, center and rigth ++*/
putchar (center);
putchar (right);

/*break program if the condition is true (if is 789=+)*/
if ((left == 55) && (center == left + 1) && (right == center + 1))
{
break; /*terminate the program*/
}

putchar(','); /*print (,)*/
putchar (' '); /*prirint a space*/

} /*end for #3*/

} /*end for #2*/

} /*end for #1*/

putchar('\n'); /*new line*/

return (0);

}
