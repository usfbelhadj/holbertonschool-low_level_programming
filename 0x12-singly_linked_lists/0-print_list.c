#include "lists.h"
/**
 * 
 * 
 * 
 * 
 * 
 */

size_t print_list(const list_t *h)
{
int n = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%d] %s",h->len, h->str);
}
if (h->str == NULL)
{
printf("[%d] (nil)",n);
}
h = h->next;

n++;
printf("\n");
}
return (n);
}