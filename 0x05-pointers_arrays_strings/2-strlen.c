#include "holberton.h"
/**
*_strlen- length of string
*@c: integer
*Return: integer
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