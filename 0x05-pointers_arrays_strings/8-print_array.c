#include "holberton.h"
#include <stdio.h>
/**
 *print_array -elements of an array of integers
 *@a: array-int
 *@n: integer
 *Return: void
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i < n - 1)
printf("%d, ", a[i]);
else
printf("%d\n", a[i]);
i++;
}
}
