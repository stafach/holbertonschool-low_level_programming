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

for (i = 1; i < n; i++)
{
for (j = 0; j < i + 1; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
