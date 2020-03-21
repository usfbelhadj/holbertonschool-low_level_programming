#include "lists.h"
/**
 * *add_node- Add node Func
 * @head:The start of the Node
 * @str:The new Node
 * Return: Integer
 */

list_t *add_node(list_t **head, const char *str)
{
struct list_s *temp;
int i;
temp = (struct list_s *) malloc(sizeof(struct list_s));
if (temp == NULL)
return (NULL);
if (temp != NULL)
{
temp->str = strdup(str);
for (i = 0; i < str[i]; i++)
{
temp->next = (*head);
}
temp->len = i;
}
(*head) = temp;
return (temp);
}
