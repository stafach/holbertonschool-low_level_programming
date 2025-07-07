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

	if (*str == 0)
		return (0);

	cpstr = malloc(sizeof(char) * *str);

	if (cpstr == 0)
		return (0);

	while (str[i] != '\0')
	{
		cpstr[i] = str[i];
		i++;
	}

	return (cpstr);
	free(cpstr);
}
