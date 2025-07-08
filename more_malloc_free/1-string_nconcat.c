#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
**string_nconcat - concatenates two strings if < n
*@s1: 1st string
*@s2: 2nd string
*@n: bytes of s2
*Return: NULL or a pointer with the string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int len = 0;
	unsigned int len2 = 0;
	char *str;
	unsigned int comp_n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;

	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
		comp_n = n;
	else
		comp_n = len2;

	str = malloc(sizeof(char) * (len + 1 + comp_n));

	if (str == NULL)
		return (NULL);

	for (j = 0; j < len; j++)
		str[j] = s1[j];

	for (i = 0; i < comp_n; i++)
	{
		str[j] = s2[i];
		j++;
	}
	str[j] = '\0';
	return (str);
}
