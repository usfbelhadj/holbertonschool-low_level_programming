#include "holberton.h"
/**
 * print_square- square, followed by a new line
 *@n: int
 * Return: Always 0.
 */
void print_square(int n)
{
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j =1; j <= n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
