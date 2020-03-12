#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - op
 * @argv: string
 * @argc: integer
 * Return: the result
 */
int main (int argc, char **argv)
{
int n, nb1, nb2;
int (*p) (int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if ((*argv[2] == '%' || *argv[2] == '/') && *argv[3] == '0')
{
printf("Error\n");
exit(100);
}
nb1 = atoi(argv[1]);
nb2 = atoi(argv[3]);
p = (get_op_func(argv[2]));
if (p == NULL)
{
printf("Error\n");
exit(99);
}
n =(p)(nb1, nb2);
printf("%i\n", n);
return (0);
}
