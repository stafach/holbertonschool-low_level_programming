#include "main.h"
/**
*_isdigit - check for digit
*@c: digit number
*Return: 1 if its digit, 0 otherwise
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
