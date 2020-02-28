#include "holberton.h"
/**
 *factorial- factorial of num
 *@n: integer
 * Return: Always 0.
 */
int factorial(int n)
{
if (n == 0)
return (1);
if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
