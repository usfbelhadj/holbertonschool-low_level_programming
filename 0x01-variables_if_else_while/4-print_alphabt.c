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
if ((strcmp('e',c)!=0 || (strcmp('q',c)!=0))
putchar(c);
return (0);
}
