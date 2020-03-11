#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - to print a name
 * @action: The function i use to check the array
 * @array: an array
 * @size: the size of an array
 * Return : Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL)
return;
for (i = 0; size > i; i++)
{
action(array[i]);
}
}
