#include "lists.h"

/**
 *delete_dnodeint_at_index - delete a node at given index
 *@head: head of linked list
 *@index: index of node that should be deleted
 *
 *Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;

temp = *head;
if (temp == NULL)
return (-1);
if (index == 0)
{
temp = temp->next;
*head = temp->next;
free(temp);
}
return (1);
}
