#include "holberton.h"
/**
 * swap_int- swaps two int
 *@k: int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int k;
k = *a;
*a = *b;
*b = k;
}
