#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - to search for an integer
 * @s: The function i use to comp the array
 * Return: operator
 */
int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
while (ops[i].op != NULL)
{
if (*s == *ops[i].op)
return (ops[i].f);
i++;
}
printf("Error\n");
exit(99);
}
