#include "main.h"
/**
*print_diagonal - draws a diagonal line
*@n: number of diagonal
*Return: Always 0
*/

void print_diagonal(int n)
{
int i = 0;

if (n <= 0)
{
_putchar('\n');
}
while (i < n)
{
int j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
}
