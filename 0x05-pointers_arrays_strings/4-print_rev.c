#include "holberton.h"

/**
 * print_rev-print a string in reverse
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
for (i = *s; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
