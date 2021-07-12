#include <stdio.h>
#include<stdlib.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	/*Declaring variables*/
	int count;
	int first_num;
	int second_num;
	int result;

	(void) argc; /*Ignore argc*/

	count = 1;
	if (argv[count] != '\0') /*Goes through the whole array*/
	{
		/*Condition If the program does not receive two arguments*/
		if (argv[count] == NULL || argv[count + 1] == NULL)
		{
			printf("Error\n");
			return (1);
		}

		else /*Condition If the program does receive two arguments*/
		{
			first_num = atoi(argv[count]); /*ATOI --> convert string to int*/
			second_num = atoi(argv[count + 1]);
			result = first_num * second_num;

			printf("%d\n", result);
		}

	}

	return (0);
}
