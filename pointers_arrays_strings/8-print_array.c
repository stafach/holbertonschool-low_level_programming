#include "main.h"
#include <stdio.h>

/**
*print_array - print the element of the array
*@a: the array
*@n: number of element in the array
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}


