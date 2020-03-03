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
s = malloc(i + 1);
if (s == NULL)
return (NULL);
for (j = 0; str[j]; j++)
s[j] = str[j];
return (s);
free(s);
}
