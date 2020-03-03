#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- creates an array of chars
 * @str: string
 * Return: Nothing.
 */
char *_strdup(char *str)
{
char *s;
unsigned int i = 0;
unsigned int j;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
i++;
}
s = malloc(sizeof(*s) * i);
for (j = 0; j < i; j++)
s[j] = str[j];
return (s);
}
