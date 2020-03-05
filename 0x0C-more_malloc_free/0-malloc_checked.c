#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - malloc
 *@b: integer
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
int *p;
p = (malloc(sizeof(b)));
return (p);
}
