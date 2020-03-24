#include "lists.h"
/**
 *pop_listint- Delete List
 * @head:First iteam in the list
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int l;
temp = *head;
if (temp == NULL)
return (0);
while ((*head)->next != NULL)
{
*head = (*head)->next;
l = (*head)->n;
free(temp);
}
return (l);
}