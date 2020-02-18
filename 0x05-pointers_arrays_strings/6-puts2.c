#include "holberton.h"

/**
 * puts2- n/2=0
 *
 * Return: int
 */
void puts2(char *str)
{
int i, j;
while (str[j] != '\0')
j++;
for (i = 0; i < j; i += 2)
_putchar(str[i]);
_putchar('\n');
}

