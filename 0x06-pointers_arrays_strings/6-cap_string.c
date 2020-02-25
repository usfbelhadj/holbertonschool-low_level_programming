#include "holberton.h"
/**
 *cap_string - upper
 *@s: string
 *Return: string
 */
char *cap_string(char *s)
{
int i;
char c[] = " \t;,{?!.\n()]";

for (i = 0; s[i] != '\0'; i++)
{
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] = s[i + 1] - 32;
}
if ((s[0] >= 'a') && (s[0] <= 'z'))
s[0] = s[0] - 32;
}
return (s);
}
