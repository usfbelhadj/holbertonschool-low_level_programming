#include "lists.h"

int pop_listint(listint_t **head)
{
listint_t *temp = *head;
int l;
if (temp == NULL)
return (0);
while (*head != NULL)
{
l = (*head)->n;
*head = (*head)->next;
free(temp);
}
return (l);
}