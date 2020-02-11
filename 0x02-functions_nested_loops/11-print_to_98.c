#include "holberton.h"
#include <stdio.h>
/**
*print_to_98- checkes if character is lowercase
*@n: integer to print the sign of a number
*Return: 0
*/
void print_to_98(int n)
{
if (n < 98)
{
int i;
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
if (n > 98)
for (i = n; i >= 98; --i)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
if (n == 98)
printf("98");
}
printf("\n");
}
