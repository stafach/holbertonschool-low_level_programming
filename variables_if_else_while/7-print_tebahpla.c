#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)

{
	char alphabet;

	for (alphabet = 'z'; 'a' <= alphabet; alphabet--)
	{
		putchar (alphabet);
	}
putchar ('\n');

return (0);
}

