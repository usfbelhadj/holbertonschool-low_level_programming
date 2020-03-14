#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - print_nums
 *@n: integer
 *@separator: string
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list print_num;
va_start(print_num, n);
if (separator == NULL)
separator = NULL;
for (i = 0; i < n; i++)
{
printf("%d", va_arg(print_num, unsigned int));
if (i + 1 == n)
break;
printf("%s", separator);
}
printf("\n");
va_end(print_num);
}
