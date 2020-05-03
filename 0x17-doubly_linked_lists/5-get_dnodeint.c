#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: First Iteam
 * @index: index
 * Return: integer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp;
temp = head;
if (temp == NULL)
return (NULL);
while (temp != NULL)
{
if (i == index)
return (temp);
i++;
temp = temp->next;
}
return (temp);
}
