#include "main.h"

/**
* _strcmp - compare two string
*@s1: 1st string
*@s2: 2nd string
*Return: str1 - str2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] - s2[i])
			return (s1[i] - s2[i]);

		i++;
	}
	return (s1[i] - s2[i]);
}
