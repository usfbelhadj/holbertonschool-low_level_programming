#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: integer
 * @size: integer
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
int i, j, s, t;
s = 0;
t = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
s = s + a[(size + 1) * i];
}
if (i + j == size - 1)
{
t = t + a[(size - 1) * (i + 1)];
}
}
}
printf("%i, %i\n", s, t);
}
