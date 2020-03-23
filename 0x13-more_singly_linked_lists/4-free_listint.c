#include "lists.h"
/**
 * free_listint- Free Linked Lidst
 * @head:The start of the Node
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
