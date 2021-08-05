#include "holberton.h"
/**
 * _abs - valor absolute
 *
 *@n: The int to print
 * Return: Returns valor absolute
 */

int _abs(int n)
{

if (n < 0) /*if n is greater than zero*/
{
return (n * (-1));
}

else if (n == 0) /*if n is equal 0*/
{
return (0);
}

else
{
return (n); /*if n is positive*/
}

}
