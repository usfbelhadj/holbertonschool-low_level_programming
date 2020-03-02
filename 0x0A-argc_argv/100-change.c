#include <stdio.h>
#include <stdlib.h>
/**
 * main - change
 * @argc: integer
 * @argv: string
 * Return: path
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
if (atoi(argv[1]) < 0)
printf("0\n");
else
{
int i = 0;
int n = atoi(argv[1]);
while (n > 0)
{
if (n - 25 >= 0)
n -= 25;
else if (n - 10 >= 0)
n -= 10;
else if (n - 5 >= 0)
n -= 5;
else if (n - 2 >= 0)
n -= 2;
else if (n - 1 >= 0)
n -= 1;
i++;
}
printf("%d\n", i);
}
}
return (0);
}
