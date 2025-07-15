#include "3-calc.h"

/**
*get_op_func - select the good function for the good operator
*@s: the operator
*Return: NULL or the good function
*/


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL || ops[i].f != NULL)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);

		i++;
	}

	return (NULL);;
}
