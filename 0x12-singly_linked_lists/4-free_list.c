#include "lists.h"
/**
 * free_list- Free Linked Lidst
 * @head:The start of the Node
 * Return: Integer
 */
void free_list(list_t *head)
{
struct list_s *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
