#include "main.h"

/**
**_memcpy - copies memory area
*@dest: 2nd  memory area
*@src: 1st memory area
*@n: bytes
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
