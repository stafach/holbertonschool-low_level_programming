#include "main.h"

/**
*print_chessboard - prints the chessboard.
*@a: array
*Return: Nothing
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (j = 0; a[j] < a[8]; j++)
	{
		for (i = 0; a[i] < a[8]; i++)
			_putchar(a[j][i]);

	_putchar('\n');
	}
}
