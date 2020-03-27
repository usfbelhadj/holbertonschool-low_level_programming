#include "holberton.h"
/**
 * clear_bit - set bit to 0 at
 *@n: unsigned long integer
 *@index: bit
 *Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	return (-1);
	*n = *n & ~ (1 << index);
	return (1);
}
