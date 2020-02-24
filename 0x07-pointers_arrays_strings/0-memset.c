#include "holberton.h"
/**
 * _memset - function fills the first bytes
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: integer
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
char *x = s;
for (i = n; n > 0; --i)
{
*x = b;
x++;
n--;
}
return (x);
}