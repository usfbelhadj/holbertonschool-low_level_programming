#include "holberton.h"
/**
 *set_bit -set bit at
 *@n: unsigned long integer
 *@index: bit
 *Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	*n |= 1 << index;
		return (1);
}
