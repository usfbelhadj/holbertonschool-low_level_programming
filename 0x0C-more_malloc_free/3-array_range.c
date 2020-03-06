#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - malloc
 *@min: integer
 *@max: integer
 * Return: 0.
 */
int *array_range(int min, int max)
{
int i, *arr, j = 0;
if (min > max)
return (NULL);
arr = malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
return (NULL);
for (i = min; i <= max; i++)
{
arr[j] = i;
j++;
}
return (arr);
}
