#include "holberton.h"
/**
 *flip_bits - bits flip
 *@n: unsigned long integer
 *@m: unsigned long integer
 *Return: Integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, count = 0;

	i = n ^ m;
	while (i > 0)
	{
		if (i & 1)
		count++;
		i >>= 1;
	}
	return (count);
}
