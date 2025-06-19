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
if (mul == 0)
{
_putchar('0');
}
else if (mul < 10)
{
_putchar(' ');
_putchar(mul + '0');
}
else
{
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
