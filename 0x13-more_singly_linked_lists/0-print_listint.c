#include "lists.h"
/**
 *print_listint- Function That prints all the elements in the list
 *@h:Struct Pointer
 *Return: Integer
 */

size_t print_listint(const listint_t *h)
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
