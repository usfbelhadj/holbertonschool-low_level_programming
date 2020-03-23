#include "lists.h"


listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *newNode;
temp = *head;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
else
newNode->n = n;
newNode->next = NULL;
if (temp == NULL)
*head = newNode;
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = newNode;
}
return (newNode);
}