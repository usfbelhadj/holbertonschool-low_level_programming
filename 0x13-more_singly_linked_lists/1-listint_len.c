#include "lists.h"
/**
 * listint_len- Returns the number of elements in a linked
 *@h:Struct Pointer
 *Return: Integer
 */

size_t listint_len(const listint_t *h)
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
