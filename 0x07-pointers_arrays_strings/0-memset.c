#include "holberton.h"
/**
 * _memset - function fills the first bytes
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: inte
 * Return: aa
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}