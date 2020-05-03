#include "lists.h"
/**
 *sum_dlistint - sum
 *@head: First Iteam
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp;
temp = head;
if (temp == NULL)
{
return (0);
}
return (temp->n + sum_listint(temp->next));
}
