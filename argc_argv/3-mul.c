#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*@argc: number of arguments
*@argv: array with the arguments
*Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int n = 0;
	int m = 0;

	if (argc > 2)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", n * m);
	}
	else
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
	return (0);
}
