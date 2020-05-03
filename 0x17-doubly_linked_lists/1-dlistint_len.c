#include "lists.h"
/**
 * dlistint_len- Returns the number of elements in a linked
 *@h:Struct Pointer
 *Return: Integer
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
{
while (h != NULL)
{
h = h->next;
i++;
}
}
return (i);
}
