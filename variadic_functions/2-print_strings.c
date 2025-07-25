#include "variadic_functions.h"

/**
*print_strings - print the strings we give in parameters
*@separator: the separator between strings
*@n: number of string
*Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;
	char *str;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char*);

		if (str == NULL)
			printf("(nil)");

		else
		{
			printf("%s", str);

			if (i < n - 1 && separator != NULL)
				printf("%s", separator);

		}
	}
		printf("\n");
		va_end(string);
	}
