#include "holberton.h"
/**
 *_isupper- check the code for Holberton School students.
 *Return: Always 0.
 *@c: integer.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
