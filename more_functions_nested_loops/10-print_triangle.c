#include "main.h"
/**
*print_triangle - print a reverse triangle
*@size: the size of the triangle
*Return: Always 0
*/

void print_triangle(int size)
{
int x;
int y;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 1; x < size ; x++)
{
for (y = 0; y < size - x; y++)
{
_putchar(' ');
}
for (y = 0; y < x; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
