#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)

{
	char n;

	for (n = 48; n <= 57; n++)
	{
		putchar (n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar (n);
	}
	putchar ('\n');
	return (0);
}
