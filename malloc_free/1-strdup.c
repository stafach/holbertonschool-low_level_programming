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
	int length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;


	cpstr = malloc(sizeof(char) * (length + 1));

	if (cpstr == NULL)
		return (NULL);


	while (str[i] != '\0')
	{
		cpstr[i] = str[i];
		i++;
	}

	cpstr[i] = '\0';
	return (cpstr);
}

