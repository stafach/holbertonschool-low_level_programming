#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*@argc: the number of argument
*@argv: the array with the argument
*Return: always 0
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
