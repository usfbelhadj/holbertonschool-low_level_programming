#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @s: string
 * @accept: string
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, x;
x = 0;
for(i = 0; s[i] != '\0'; i++)
{
for(j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
x++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return(x);
}
