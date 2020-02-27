#include "holberton.h"
/**
 *_puts_recursion- prints a string
 *@s: string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
int i = 0;
if (*s++ != '\0')
_putchar(s[i - 1]);
if (s[i] != '\0')
_puts_recursion(s);
if (s[i] == '\0')
_putchar('\n');
return;
}
