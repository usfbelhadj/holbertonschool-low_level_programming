#include "holberton.h"
/**
 *get_bit- get bit at
 *@n: unsigned long integer
 *@index: bit
 *Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	return (-1);
	n = n & 1 << index;
	if (n == 0)
		return (0);
	else
		return (1);
}
