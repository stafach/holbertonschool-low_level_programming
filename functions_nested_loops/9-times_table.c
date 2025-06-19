#include "main.h"
/**
* times_table - print the table of a number
* Return: ALways 0
*/


void times_table(void)
{
int i, j, mul, num;

num = 9;
for (i = 0; i < num + 1; i++)
{
for (j = 0; j < num + 1; j++)
{
mul = i * j;
if (mul == 0)
{
_putchar(mul + '0');
_putchar(',');
_putchar(' ');
}
else if (mul < 10)
{
_putchar(' ');
_putchar(mul + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
