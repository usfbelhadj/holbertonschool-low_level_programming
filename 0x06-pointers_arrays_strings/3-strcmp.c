#include "holberton.h"
/**
 *_strncpy - Copy char
 *@s1 :string
 *@s2 :string
 *Return: integer
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] == s2[i] && s1[i + 1] != '\0' && s1[i + 1] != '\0'; i++)
{
;
}
return (s1[i] - s2[i]);
}
