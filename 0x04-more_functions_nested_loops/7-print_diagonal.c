#include "holberton.h"
/**
 * print_diagonal- diagonal line
 *@n: int
 */
void print_diagonal(int n)
{
int i, j, k;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (i == j)
{
k = i;
while (--k)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
}
else
_putchar('\n');
}
