#include "lists.h"
/**
 *add_dnodeint- Adds a new node at the beginning
 * @head:The start of the Node
 * @n:The new Node
 * Return: Integer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
else
{
temp->n = n;
temp->next = *head;
temp->prev = NULL;
if(*head != NULL)
(*head)->prev = temp;
*head = temp;
}
return (temp);
}
