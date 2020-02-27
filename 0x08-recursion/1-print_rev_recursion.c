#include "holberton.h"
/**
 *_print_rev_recursion- prints a string rev
 *@s: string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
int i = 0;
if (*s++ != '\0')
if (s[i] != '\0')
_print_rev_recursion(s);
_putchar(s[i - 1]);
}
