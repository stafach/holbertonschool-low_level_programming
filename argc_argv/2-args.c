#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*@argc: number of arguments
*@argv: the array with argument
*Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
