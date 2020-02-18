#include "holberton.h"
/**
 * puts_half- prints half of a string
 *@str: string
 * Return: void
 */
void puts_half(char *str)
{
int i, j, k;
j = 0;
while (str[j] != '\0')
j++;
i = j / 2;
for (k = i; k <= j - 1; k++)
_putchar(str[k]);
_putchar('\n');
}
