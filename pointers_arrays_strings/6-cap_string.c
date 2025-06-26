#include "main.h"

/**
**cap_string - capitalizes all words of a string
*@str: the string
*Return: Always 0
*/

char *cap_string(char *str)
{
int i = 0, j;
char sep[] = {' ', '\t',
'\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};


while (str[i] != '\0')
{
	for (j = 0; j < 13; j++)
	{
		if (str[i] == sep[j])
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{				
				str[i + 1] -= 32;
				break;
				}
				}
				i++;
				}
}
				return (str);

}

