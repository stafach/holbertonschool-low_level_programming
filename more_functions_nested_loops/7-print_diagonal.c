#include "main.h"
/**
*print_diagonal - draws a diagonal line
*@n: number of diagonal
*Return: Always 0
*/

void print_diagonal(int n)
{
int i;
int j;

if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (j = 0; j < i ; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
