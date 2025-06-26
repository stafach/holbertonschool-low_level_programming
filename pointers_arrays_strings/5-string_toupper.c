#include "main.h"

/**
**string_toupper - changes all lowercase letters of a string to uppercase.
*@str: the string
*Return: Always 0
*/

char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] > 95 && str[i] < 123)
str[i]  -= 32;


i++;
}
return (str);
}
