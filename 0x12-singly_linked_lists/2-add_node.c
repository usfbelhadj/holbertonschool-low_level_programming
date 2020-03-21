#include "lists.h"
/**
 * list_len- List length
 * @h: Struct Pointer
 * Return: Integer
 */

list_t *add_node(list_t **head, const char *str)
{
struct list_s* temp;
int i;
temp = (struct list_s *) malloc(sizeof(struct list_s));
for (i = 0; i < str[i]; i++)
temp->str = strdup(str);
temp->next = (*head);
temp->len = i;
(*head)=temp;
return (temp);
}