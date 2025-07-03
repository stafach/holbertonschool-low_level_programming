#include "main.h"

/**
**_strstr - locates a substring
*@haystack: the string
*@needle: the substring to locate
*Return: the substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int found = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
			{
				if (haystack[j] == needle[i])
				{	
					return (&haystack[j]);
					found = 1;
					break;
				}

			}
			if (!found)
				break;
	}
	return (0);
}
