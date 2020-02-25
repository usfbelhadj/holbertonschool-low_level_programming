#include "holberton.h"
/**
 * _strpbrk - function that gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
char c, *k;
for (c = *s; c != 0; s++)
{
c = *s;
for (k = accept; *k != 0; k++)
{
if (c == *k)
{
return (s);
}
}
}
return (0);
}
