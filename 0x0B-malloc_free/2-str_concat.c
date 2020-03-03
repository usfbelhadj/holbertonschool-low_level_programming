#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- creates an array of chars
 * @s1: string
 * @s2: string
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, c1 = 0, c2 = 0, k;
char *s;
while (s1[i] != '\0')
{
i++;
c1++;
}
while (s2[j] != '\0')
{
j++;
c2++;
}
s = malloc(c1 + c2 + 1);
if (s == NULL)
return (NULL);
i = 0;
for (k = 0; k < c1; k++)
{
s[i] = s1[k];
i++;
}
j = 0;
for (k = 0; k < (c1 + c2); k++)
{
s[i] = s2[j];
j++;
i++;
}
s[i] = '\0';
return (s);
free(s);
}
