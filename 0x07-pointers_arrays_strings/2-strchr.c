#include <stdio.h>
#include "holberton.h"
/**
 * _strchr-locates a character in a string.
 * @s: string
 * @c: character
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
int i, j;
while (s[j] != '\0')
{
j++;
}

for (i = 0; i < j; i++)
{
if (s[i] == c)
break;
}
if (s[i] == c)
return (&s[i]);
else
return (NULL);
}
