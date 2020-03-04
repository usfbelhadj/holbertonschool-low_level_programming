#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid- creates an array of chars
 * @grid: intger
 * @height: intger
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int j;
for (j = 0 ; j < height; j++)
free(grid[j]);
free(grid);
}