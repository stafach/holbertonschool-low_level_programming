#include <stdio.h>
/**
*main - Entry point
*Return: Always 0
*/

int main(void)
{
int i;

for (i = 1; i < 100; i++)
{
if (((i % 3) == 0) && ((i % 5) == 0))
{
printf("FizzBuzz");
}
else if (((i % 3) == 0) && ((i % 5) != 0))
{
printf("Fizz");
}
else if (((i % 5) == 0) && ((i % 3) != 0))
{
printf("Buzz");
}
else if (i < 10)
{
printf("%d", i);
}
else if (i > 10 && i < 100)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
}
putchar(' ');
}
if (i == 100)
{
printf("Buzz");
}
putchar('\n');
return (0);
}
