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
int i;
for (i = 0; s[i] != '\0' && *s != c; i++)
if (s[i] == c)
return(s);
else
return(NULL);
}