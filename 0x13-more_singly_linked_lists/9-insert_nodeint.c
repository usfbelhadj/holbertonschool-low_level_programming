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
if (add != NULL)
{
add->next = *head;
add->n = n;
add = *head;
return (add);
}
for (i = 2; i <= idx - 1; i++)
{
add = add->next;
temp->next = add->next;
add->next = temp;
}
return (*head);
}
