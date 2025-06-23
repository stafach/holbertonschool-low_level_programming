#include <stdio.h>
/**
*main - Entry point
*Return: Always 0
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
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
else
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
}
putchar(' ');
}
putchar('\n');
return (0);
}
