#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - malloc
 *@s1: string1
 *@s2: string2
 *@n: integer
 * Return: 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, c1 = 0, c2 = 0, k;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
i++;
c1++;
}
if (i == 0)
s1 = "";
while (s2[j] != '\0')
{
j++;
c2++;
}
if (j == 0)
s2 = "";
if (n >= j)
n = j;
s = malloc(c1 + n + 1);
if (s == NULL)
return (NULL);
i = 0;
for (k = 0; k < c1; k++)
{
s[i] = s1[k];
i++;
}
for (k = c1; k < (c1 + n); k++)
{
s[i] = s2[k - c1];
i++;
}
s[i] = '\0';
return (s);
free(s);
}
