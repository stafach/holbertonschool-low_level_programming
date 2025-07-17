#include "variadic_functions.h"

/**
*print_char - print a char
*@par: the char
*Return: Nothing
*/

void print_char(va_list par)
{
	char c = va_arg(par, int);
	
	printf("%c", c);
}

/**
*print_int - print an interger
*@par: the integer
*Return: Nothing
*/

void print_int(va_list par)
{
	int num = va_arg(par, int);
	
	printf("%d", num);
}

/**
*print_float - print a float
*@par: the float
*Return: Nothing
*/

void print_float(va_list par)
{
	float decimal = va_arg(par, double);
	
	printf("%f", decimal);
}

/**
*print_str - print a string
*@par: the string
*Return: Nothing
*/

void print_str(va_list par)
{
	char *str = va_arg(par, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
*print_all - print anithing
*@format: the format we choose
*Return: Nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list par;
	char *s = "";
	type_t func_types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
	};

	va_start(par, format);

	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4 && format[i] != (*func_types[j].t))
			j++;

		if (j < 4)
		{
			printf("%s", s);
			func_types[j].f(par);
			s = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(par);
}
