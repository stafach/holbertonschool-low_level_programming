#include "main.h"

/**
**_strcat - concatenates two strings.
*@dest: 1st string
*@src: second string
*@n: number of bytes
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j;

while (dest[i] != '\0')
i++;

for (j = 0; src[j] != '\0'; j++)
{
while (j < n)
{
dest[i] = src[j];
i++;
j++;
}
}

return (dest);
}
