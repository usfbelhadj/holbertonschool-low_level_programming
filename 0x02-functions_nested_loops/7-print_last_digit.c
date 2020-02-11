#include "holberton.h"
/**
*print_last_digit- last digit
*@c: string
*Return: 0
*/
int print_last_digit(int c)
{
c = (c % 10);
if (c < 0)
c = -c;
_putchar(c + '0');
return (c);
}
