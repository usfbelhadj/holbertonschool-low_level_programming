#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Hewadecimal
 *Return: 0
 */
int main(void)
{
int n, i, a;
for (n = 0; n < 100; n++)
{
i = n / 10;
a = n % 10;
putchar(i + '0');
putchar(a + '0');
if (n < 99)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
