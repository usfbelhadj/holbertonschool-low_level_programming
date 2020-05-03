#include "lists.h"
/**
 *print_dlistint- Function That prints all the elements in the list
 *@h:Struct Pointer
 *Return: Integer
 */
size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
