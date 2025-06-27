#include "main.h"

/**
**leet - encodes a string into 1337
*@str: the string
*Return: str
*/

char *leet(char *str)
{
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	char number[] = {'4', '3', '0', '7', '1'};
	int n;
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		for (n = 0; n < 5; n++)
		{
			if ((str[i] == letter[n]) || (str[i] == letter[n] - 32))
			str[i] = number[n];
		}
		}
	return (str);
}
