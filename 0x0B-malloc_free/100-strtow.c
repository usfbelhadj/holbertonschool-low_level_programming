#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow- creates an array of chars
 * @str: string
 * Return: Nothing.
 */
char **strtow(char *str)
{
unsigned int i = 0;
unsigned int j, k, l;
char *s, **s1;
while (str[i] != '\0')
i++;
if (i == 0)
return (NULL);
s = malloc(i * sizeof(str));
if (s == NULL)
return (NULL);
for (j = 0; str[j]; j++)
{
if (s[j] != ' ')
for (k = 0;str[k]; k++)
{
s1 = s1 + s[k];
for (l = 0; s1[l]; l++)
if (**s1 == ' ')
break;
}
}
return (s1);
}
