#include "holberton.h"
/**
 *_strcat - Concat char
 *@dest:string
 *@src:string
 *@n: integer
 * Return: strings
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j = 0;
while (dest[j] != '\0')
{
j++;
}
for (i = 0 ; i < n && src[i] != '\0'; i++)
{
dest[j + i] = src[i];
}
dest [j + i] = '\0';
return (dest);
}
