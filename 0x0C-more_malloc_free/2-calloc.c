#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - malloc
 *@nmemb: integer
 *@size: integer
 * Return: 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i; 
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(size * nmemb);
if (p == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
p[i] = '\0';
}
return (p);
}
