#include "lists.h"
/**
 * list_len- List length
 * @h: Struct Pointer
 * Return: Integer
 */

size_t list_len(const list_t *h)
{
int n = 0;
while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
