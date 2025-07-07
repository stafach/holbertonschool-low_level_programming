#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
**_strdup - copy a string and return him with new memory
*@str: the string
*Return: 0 or the string
*/

char *_strdup(char *str)
{
	char *cpstr;
	int i = 0;
	int lenght = 0;

	if (*str == 0)
		return (0);

	while (str[lenght] != '\0')
		lenght++;


	cpstr = malloc(sizeof(char) * (lenght + 1));

	if (cpstr == 0)
		return (0);


	while (str[i] != '\0')
	{
		cpstr[i] = str[i];
		i++;
	}

	cpstr[i] = '\0';
	return (cpstr);
	free(cpstr);
}

