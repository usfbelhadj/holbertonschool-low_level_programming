#include "holberton.h"
/**
 **_strcpy - copies the string pointed
 *@dest: string
 *@src: source
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
int i, j = 0;
while (src[j] != '\0')
j++;
for ( i = 0; i <= j; i++)
{
dest[i] = src[i];
}
return (dest);
}
