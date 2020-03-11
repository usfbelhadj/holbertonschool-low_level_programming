#include "function_pointers.h"
#include <stdio.h>
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