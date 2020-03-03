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
int i = 0, j;
char *s, *s1;
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
s1 = s1[j] + s[j];
}
return (s1);
}