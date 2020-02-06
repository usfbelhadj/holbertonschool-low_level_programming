#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Alphabets With out EQ
*Return: 0
*/
int main(void)
{
int i='a';
for (i; i <= 'z'; i++)
{
if ((i != 113) && (i != 101))
{
continue;
putchar(i);
}
}
putchar("\n");
return (0);
}
