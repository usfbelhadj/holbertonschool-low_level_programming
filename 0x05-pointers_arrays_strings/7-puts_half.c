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
if (j % 2 == 0)
i = j / 2;
else
i = (j + 1) / 2;
for (k = i; k <= j - 1; k++)
_putchar(str[k] + '\0');
_putchar('\n');
}
