#include "main.h"
/**
*print_square - prints a square
*@size: size of the square
*Return: Always 0
*/

void print_square(int size)
{
while (size-- > 0)
{
int x = 0;
while (x <= size)
{
_putchar('#');
x++;
}
_putchar('\n');
}
_putchar('\n');
}
