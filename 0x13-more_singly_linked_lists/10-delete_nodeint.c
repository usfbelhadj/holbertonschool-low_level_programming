#include "lists.h"

/**
 *delete_nodeint_at_index - delete a node at given index
 *@head: head of linked list
 *@index: index of node that should be deleted
 *
 *Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;

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