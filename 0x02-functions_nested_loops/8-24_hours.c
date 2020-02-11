#include "holberton.h"
/**
*jack_bauer- Starting time
*Return: 0
*/
void jack_bauer(void)
{
int h, m, h1, h2, m1, m2;
for (h = 0; h < 24; h++)
{
h1 = h / 10;
h2 = h % 10;
for (m = 0; m < 60; m++)
{
m1 = m / 10;
m2 = m % 10;
_putchar(h1 + '0');
_putchar(h2 + '0');
_putchar(':');
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar('\n');
}
}
}
