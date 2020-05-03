#include "lists.h"
/**
 * free_dlistint- Free Linked Lidst
 * @head:The start of the Node
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
