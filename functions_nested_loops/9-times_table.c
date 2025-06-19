#include "main.h"
/**
* times_table - print the table of a number
* Return: ALways 0
*/


void times_table(void)
{
int i, j, mul;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
mul = i * j;

if (j == 0)
{
_putchar(mul + '0');
}
else
{
_putchar(',');
_putchar(' ');

if (mul < 10)
{
_putchar(' ');
_putchar(mul + '0');
}
else
{
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
}
}
}
_putchar('\n');
}
}
