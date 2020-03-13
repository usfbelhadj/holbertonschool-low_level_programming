#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - sum
 *@n: integer
 *Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
if (n == 0)
return (0);
va_list(count);
va_start(count, n);
for (i = 0; i < n; i++)
sum += va_arg(count, unsigned int);
va_end(count);
return (sum);
}
