#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet x10
 * Return: Always 0
 */


void print_alphabet_x10(void)
{
	int x;
	char letter;
	{
		x = 0;
		while (x < 10)
		{
			letter = 'a';
			while (letter <= 'z')
			{
			_putchar(letter);
				letter++;
			}
			_putchar('\n');
			x++;
		}
	}
}
