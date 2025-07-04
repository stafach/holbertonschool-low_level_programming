#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*@argc: the nomber of arguments
*@argv: the array of the arguments
*Return: 1 if Error or 0
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
			printf("0\n");

		else if (atoi(argv[i]) < 49 || atoi(argv[i]) > 57)
		{
			printf("Error\n");
			return (EXIT_FAILURE);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	 printf("%d\n", sum);
	return (0);
}
