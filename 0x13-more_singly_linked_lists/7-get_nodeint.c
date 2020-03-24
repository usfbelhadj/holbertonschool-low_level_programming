#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
temp = head;
if (temp == NULL)
return (0);
unsigned int i = 0;
while (temp != NULL)
{
if (i == index)
return (temp);
i++;
temp = temp->next;
}
return (i);
}