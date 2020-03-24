#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: First Iteam
 * @index: index
 * Return: integer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp;
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
