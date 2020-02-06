#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Alphabets
*Return: 0
*/
int main(void)
{
char b, c;
for (b = 'a'; b <= 'z'; ++b)
putchar(b);
for (c = 'A'; c <= 'Z'; ++c)
putchar(c);
putchar('\n');
return (0);
}
