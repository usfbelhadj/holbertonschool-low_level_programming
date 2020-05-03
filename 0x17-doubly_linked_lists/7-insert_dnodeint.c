#include "lists.h"
/**
 *insert_dnodeint_at_index - insert a node
 *@h: First Iteam
 *@idx: index
 *@n: node
 *Return: integer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp, *add;
unsigned int i = 0;
temp = *h;
add = malloc(sizeof(dlistint_t));
if (add == NULL)
return (NULL);
if (idx == 0)
{
add->n = n;
add->next = *h;
*h = add;
return (add);
}
else
{
while (i <= idx - 1)
{
if (i == idx - 1)
{
add->n = n;
add->next = temp->next;
temp->next = add;
return (add);
}
if (temp == NULL || temp->next == NULL)
return (NULL);
temp = temp->next;
i++;
}
}
return (NULL);
}
