#include "lists.h"
/**
 * print_list- Print All Item in list
 * @h: structe pointer
 * Retune: integer
 */

size_t print_list(const list_t *h)
{
int n;
if (h == NULL)
{
printf("[0] (nil)");
return;
}
while (h != NULL)
{
printf("%d", h->str);
h = h->next;
n++;
}
printf("\n");
return (n);
}
