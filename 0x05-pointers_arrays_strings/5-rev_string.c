#include <stdio.h>
#include "holberton.h"
#include <string.h>
/**
 * rev_string- reverse a string
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i;
char a;
for (i = *s; i >= 0; i--)
a = a + s[i];
}
