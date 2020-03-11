#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - to print a name
 * @f: The function i use to print the name
 * @name: a name
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
