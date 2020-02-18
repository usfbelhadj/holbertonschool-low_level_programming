#include "holberton.h"
/**
 * rev_string- reverse a string
 *@s: string
 * Return: void
 */
void rev_string(char *s)
{
int i, j = 0;
char tmp;
while (s[j])
j++;
for (i = 0; i <= j / 2; i++)
{
tmp = s[j - i - 1 + '\0'];
s[j - i - 1] = s[i];
s[i] = tmp;
}
}
