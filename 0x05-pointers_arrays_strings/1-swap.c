#include "holberton.h"
/**
 *swap_int- swaps two integer
 *@k: integer
 *Return: void
 */
void swap_int(int *a, int *b)
{
int k;
k = *a;
*a = *b;
*b = k;
}

