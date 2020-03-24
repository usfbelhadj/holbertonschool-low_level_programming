#include "lists.h"
/**
 * listint_len- Returns the number of elements in a linked
 *@h:Struct Pointer
 *Return: Integer
 */

size_t listint_len(const listint_t *h)
{
unsigned int i;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
