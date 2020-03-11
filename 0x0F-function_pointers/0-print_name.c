#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - to print a name
 * @f: The function i use to check the name
 * @name: a name string
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
