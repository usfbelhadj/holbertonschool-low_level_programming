#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Alphabets
 *Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
if (c == 'e' && c == 'q')
putchar(c);
return (0);
}
