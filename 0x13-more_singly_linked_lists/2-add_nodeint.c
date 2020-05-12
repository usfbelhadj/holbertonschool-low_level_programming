#include "lists.h"
/**
 *add_nodeint- Adds a new node at the beginning
 * @head:The start of the Node
 * @n:Data
 * Return: Integer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
if (temp != NULL)
{
temp->n = n;
temp->next = *head;
*head = temp;
}
return (temp);
}
