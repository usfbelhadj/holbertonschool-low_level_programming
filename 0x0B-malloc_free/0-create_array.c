#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- creates an array of chars
 * @c: string
 * @size: integer
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
if (size == 0)
{
return (NULL);
}
else
{
str = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
}
