#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Do
 *Return: 0
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
for (j = i + 1; j < 10; j++)
{
if (i != j || j != i)
{
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
