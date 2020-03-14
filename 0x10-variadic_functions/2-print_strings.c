#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - print_string
 *@n: integer
 *@separator: string
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list print_string;
va_start(print_string, n);
for (i = 0; i < n; i++)
{
if (va_arg(print_string,const char *) != NULL)
printf("%s", va_arg(print_string,const char *));
if (i + 1 == n)
break;
if (separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(print_string);
}