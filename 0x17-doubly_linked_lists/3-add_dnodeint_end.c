#include "lists.h"
/**
 *add_dnodeint_end- Adds a new node at the End
 * @head:The start of the Node
 * @n:The new Node
 * Return: Integer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp, *newNode;
temp = *head;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);
else
newNode->n = n;
newNode->next = NULL;
if (temp == NULL)
*head = newNode;
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = newNode;
newNode->prev = temp;
}
return (newNode);
}

