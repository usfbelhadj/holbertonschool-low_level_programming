#include "holberton.h"
/**
 * print_triangle - prints a triangle
 *@n: int
 * Return: Always 0.
 */
void print_triangle(int n)
{
int i, j, k;
if (n <= 0)
{
_putchar('\n');
}
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n - i; j++)
{
_putchar(' ');
}
for (k = 1 ; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
