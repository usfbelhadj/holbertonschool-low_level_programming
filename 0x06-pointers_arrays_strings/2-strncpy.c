#include "holberton.h"
/**
 *_strncpy - Copy char
 *@dest:string
 *@src:string
 *@n: integer
 * Return: strings
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0 ; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n ; i++)
dest [i] = '\0';
return (dest);
}