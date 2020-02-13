#include "holberton.h"
/**
 *print_numbers- print num
 *Return: Always 0.
 *@i: int
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
_putchar(i + '0');
_putchar('\n');
}
