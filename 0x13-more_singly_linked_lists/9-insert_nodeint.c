#include "lists.h"
/**
 *insert_nodeint_at_index - insert a node
 *@head: First Iteam
 *@idx: index
 *@n: node
 *Return: integer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *add;
unsigned int i;
temp = *head;
add = malloc(sizeof(listint_t));
if (add == NULL)
return (NULL);
if (head == NULL)
return (NULL);
if (idx == 0)
{
add->n = n;
add->next = *head;
*head = add;
return (add);
}
else
{
while (i <= idx - 1)
{
if (i == idx - 1)
{
add->n = n;
add->next = temp->next;
temp->next = add;
return (add);
}
if (temp == NULL || temp->next == NULL)
return (NULL);
temp = temp->next;
i++;
}
}
return (NULL);
}
