#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - to search for an integer
 * @cmp: The function i use to comp the array
 * @array: an array
 * @size: the size of an array
 * Return: How many numbers matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; size > i; i++)
if (cmp(array[i]) != 0)
return (i);
return (-1);
}
