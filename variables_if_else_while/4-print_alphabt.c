#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar (alphabet);
		}
	}
	putchar ('\n');
		return (0);
}
