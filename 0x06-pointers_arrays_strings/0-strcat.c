#include "holberton.h"
#include <stdio.h>
/**
 *_strcat - Concat char
 *@dest:string
 *@src:string
 * Return: strings
 */
char *_strcat(char *dest, char *src)
{
int i, j = 0;
while (dest[j] != '\0')
{
j++;
}
for (i = 0; src[i] != '\0'; i++)
{
    dest[j + i] = src[i];
}
dest [j + i] = '\0';
return (dest);
}