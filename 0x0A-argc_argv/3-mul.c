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
int i, sum = 1;
for (i = 1; i < argc; i++)
sum = sum * atoi(argv[i]);
printf("%d\n", sum);
return (0);
}
