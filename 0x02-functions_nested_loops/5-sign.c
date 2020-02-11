#include "holberton.h"
/**
*print_sign - checkes if character is lowercase
*@n: integer to print the sign of a number
*Return: 1 if n is greater than zero
*/
int print_sign(int n)
{
if (n >= 1)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

