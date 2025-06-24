#include "main.h"

/**
*rev_string - reverse a string
*@s: the string
*Return: Nothing
*/

void rev_string(char *s)
{
int i = 0;
int j = 0;
char c;
while (s[i] != '\0')
{
i++;
}
i = i - 1;
while (j < i)
{
c = s[j];
s[j] = s[i];
s[i] = c;
j++;
i--;
}
}
