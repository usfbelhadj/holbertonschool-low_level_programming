#include "holberton.h"
/**
*cap_string - capitalize each word of a string
*@str: pointer type char
*Return: str
*/
char *cap_string(char *st)
{
int i = 0;
while (st[i] != '\0')
{
if (st[0] <= 122 && st[0] >= 97)
{
st[0] = st[0] - 32;
}
if (st[i] == 32 || st[i] == 46 || st[i] == '\t' ||
st[i] == '\n' || st[i] == 44 || st[i] == 59 ||
st[i] == '!' || st[i] == '?' || st[i] == '(' ||
st[i] == ')' || st[i] == '{' || st[i] == '}')
{
if (st[i + 1] <= 122 && st[i + 1] >= 97)
{
st[i + 1] = st[i + 1] - 32;
}
}
i++;
}
return (st);
}
