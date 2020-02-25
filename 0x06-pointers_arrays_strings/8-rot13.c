#include "holberton.h"
/**
*rot13 - encodes
*@s: string
*Return: string
*/
char *rot13(char *s)
{
int i, j, x = 0;
char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; s1[j] != '\0' && x == 0; j++)
{
if (s[i] == s1[j])
{
s[i] = s2[j];
x = 1;
}
}
x = 0;
}
return (s);
}
