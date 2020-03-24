#include "lists.h"
/**
 *sum_listint - sum
 *@head: First Iteam
 *Return: sum
 */
int sum_listint(listint_t *head)
{
listint_t *temp;
temp = head;
if (temp == NULL)
{
return (0);
}
return (temp->n + sum_listint(temp->next));
}
