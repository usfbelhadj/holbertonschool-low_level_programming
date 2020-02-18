#include "holberton.h"
/**
 * rev_string- reverse a string
 *
 * Return: string
 */
void rev_string(char *s)
{
int i, j;
char tmp;
j = 0;
while (s[j] != '\0')
{
j++;
}
for (i = 0; i <= j / 2; i++)
{
tmp = s[j - i - 1];
s[j - i - 1] = s[i];
s[i] = tmp;
}
}
