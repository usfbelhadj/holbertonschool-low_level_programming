#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Alphabets Whith out EQ
*Return: 0
*/
int main(void)
{
for (int i = 'a'; i <= 'z'; i++)
{
if ((i != 113) && (i != 101))
{
putchar(i);
}
}
return (0);
}
