#include "holberton.h"
/**
 *_pow_recursion- factorial of num
 *@x: integer
 *@y: integer
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
/**
 * binary_to_uint-Binary To Dic
 * @b: char
 * Return:Integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, res = 0, l = 0;

	if (b == NULL)
		return (0);
	while (b[l])
	{
		l++;
	}

	while (l > 0)
	{
		if (b[l - 1] != '0' && b[l - 1] != '1')
		{
			return (0);
		}
		res += ((b[l - 1] - '0') * _pow_recursion(2, i));
		l--;
		i++;
	}
	return (res);
}
