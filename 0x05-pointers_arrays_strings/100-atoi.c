#include "holberton.h"
#include <stdio.h>
/**
 * _atoi:function that convert a string to an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
unsigned int val = 0;
int i, sign = 1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
val = (val * 10) + (s[i] - '0');
if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
break;
}
}
return (val *sign);
}
