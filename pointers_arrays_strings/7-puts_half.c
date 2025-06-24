#include "main.h"

/**
*puts_half - prints half of a string
*@str: the string
*Return: Nothing
*/

void puts_half(char *str)
{
int taille = 0;
int i, j;

while (str[taille] != '\0')
{
taille++;
}

if ((taille % 2) == 0)
{
i = taille / 2;
}

else
{
i = (taille + 1) / 2;
}

for (j = i; str[j] != '\0'; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
