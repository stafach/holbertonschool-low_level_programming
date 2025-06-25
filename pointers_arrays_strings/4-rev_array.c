#include "main.h"

/**
*reverse_array - reverse an array of integers
*@a: the array
*@n: size of the array
*Return: Nothing
*/

void reverse_array(int *a, int n)
{
int i;
int j;

for (i = 0; i < n; i++)
{
j = a[i];
n--;
a[i] = a[n];
a[n] = j;
}
}
