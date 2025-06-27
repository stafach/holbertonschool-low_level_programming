#include "main.h"

/**
**_strncpy - copies the string pointed to by src
*@dest: where we copies
*@src: the string we copie
*@n: the number of char to copie
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
while (i < n)
{
	dest[i] = '\0';
	i++;
}

return (dest);
}
