#include "lists.h"

void free_listint2(listint_t **head)
{
if (*head != NULL)
{
listint_t *temp;
temp = *head;
*head = (*head)->next;
free(temp);
}
head = NULL;
}