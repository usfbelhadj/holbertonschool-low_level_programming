#include "holberton.h"
/**
 * _isdigit- give back return of c
 * Return: Always 0.
 * @c: integer.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return(1);
else
return (0);
}

