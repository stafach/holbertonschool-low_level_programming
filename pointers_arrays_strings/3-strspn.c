#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: the string
*@accept: the prefix
*Return: the number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		if (s[i] != accept[j] && accept[j] != '\0')
		{
			j++;
		}
		else if (s[i] != accept[j] && accept[j] == '\0')
			{
				break;
			}
		i++;
	}


			

	return (i + 1);
}
