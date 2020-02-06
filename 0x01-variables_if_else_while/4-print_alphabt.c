#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Alphabets With out EQ
*Return: 0
*/
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; ++i)
{
if (i != 'e' && i != 'q')
putchar (i);
}
putchar ('\n');
return (0);
}
