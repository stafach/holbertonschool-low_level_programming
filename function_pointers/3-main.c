#include "3-calc.h"

/**
*main - Entry point
*@argc: number of arguments
*@argv: array with the arguments
*Return: NULL or a function with the argument
*/

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int m = atoi(argv[3]);
	int (*f_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f_ptr = get_op_func(argv[2]);

	if (f_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	 printf("%d\n", f_ptr(n, m));

	 return (0);
}
