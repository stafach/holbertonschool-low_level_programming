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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
			return (&haystack[i]);

	}
	return (0);
}
