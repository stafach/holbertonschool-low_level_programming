#include "main.h"
/**
*more_numbers - print number from 0 to 14
*Return: Always 0
*/

void more_numbers(void)
{
int i;

for (i = 0; i < 15; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
