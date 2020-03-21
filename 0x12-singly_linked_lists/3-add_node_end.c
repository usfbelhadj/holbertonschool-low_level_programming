#include "lists.h"
/**
 * *add_node_end- Add node at the End Func
 * @head:The start of the Node
 * @str:The new Node
 * Return: Integer
 */
list_t *add_node_end(list_t **head, const char *str)
{
struct list_s *temp, *newNode;
unsigned int i;
temp = *head;
newNode = malloc(sizeof(struct list_s));
if (newNode == NULL)
return (NULL);
else
newNode->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
newNode->next = NULL;
newNode->len = i;
if (temp == NULL)
*head = newNode;
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = newNode;
}
return (newNode);
}
