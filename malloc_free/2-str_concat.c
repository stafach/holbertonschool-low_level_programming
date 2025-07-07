#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
**str_concat - concatenates two strings.
*@s1: 1st string
*@s2: 2nd string
*Return: Null or a pointer to the string
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int length1 = 0;
	int length2 = 0;
	char *mem;
	

	if (s1 == NULL)
		s1[0] = '\0';

	if (s2 == NULL)
		s2[0] = '\0';

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	mem = malloc(sizeof(char) * (length1 + length2 + 1));

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		mem[i] = s1[i];

	for (j = 0; j < length2; j++)
	{
		mem[i] = s2[j];
		i++;
	}

	mem[i] = '\0';
	return (mem);
}
