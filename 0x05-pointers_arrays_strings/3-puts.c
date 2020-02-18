#include "holberton.h"
/**
 * _puts- prints a string, followed by a new line
 *
 * Return:string
 */
void _puts(char *str)
{
int i;
for (i = 0; i <= *str; i++)
_putchar(str[i]);
_putchar('\n');
}
