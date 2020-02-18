#include "holberton.h"

/**
 * print_rev-print a string in reverse
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i, j, k;
j = 0;
k = 0;
while (s[k] != '\0')
{
j++;
k++;
}
for (i = j-1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
