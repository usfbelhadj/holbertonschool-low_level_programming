#include "holberton.h"
/**
*_strlen- length of string
*@s: string
*Return: 1
*/
int _strlen(char *s)
{
int c = 0;
while (*s != '\0')
{
c++;
s++;
}
return (c);
}
