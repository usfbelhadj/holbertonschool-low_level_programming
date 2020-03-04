#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid- creates an array of chars
 * @width: intger
 * @height: intger
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arg;
if (width <= 0 || height <= 0)
return (NULL);
arg = malloc(sizeof(int *) * height);
if (arg == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
arg[i] = malloc(sizeof(int *) * width);
if (arg[i] == NULL)
{
for (j = 0 ; j < i; j++)
free(arg[i]);
free(arg);
return (NULL);
}
}
return (arg);
}
