#include "variadic_functions.h"

/**
*print_char - print a char
*@type_of: the char
*Return: Nothing
*/

void print_char(va_list type_of)
{
	printf("%c", va_arg(type_of, int));
	va_end(type_of);
}

/**
*print_int - print an interger
*@type_of: the integer
*Return: Nothing
*/

void print_int(va_list type_of)
{
	printf("%i", va_arg(type_of, int));
}

/**
*print_float - print a float
*@type_of: the float
*Return: Nothing
*/

void print_float(va_list type_of)
{
	printf("%f", va_arg(type_of, double));
}

/**
*print_str - print a string
*@type_of: the string
*Return: Nothing
*/

void print_str(va_list type_of)
{
	if (type_of == NULL)
		printf("(nil)");

	printf("%s", va_arg(type_of, char *));
}

/**
*print_all - print anithing
*@format: the format we choose
*Return: Nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, j = 0, k = 0;
	va_list par;
	type_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
	};

	va_start(par, format);
	while (format != NULL && format[i] != '\0' && par[k] != '\0')
	{
		while (j < 4)
		{
			if (format[i] == (*types[j].t))
			{
			types[j].f(par);
			printf(", ");
			}
		j++;
		k++;
		}
		i++;
	}
	printf("\n");
}
