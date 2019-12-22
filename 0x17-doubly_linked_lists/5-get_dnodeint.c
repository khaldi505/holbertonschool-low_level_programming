#include "lists.h"
/**
*get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
*@head: the head of the list
*@index: the index
*Return: a pointer to the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current_node;
unsigned int nth = 0;
while (head != NULL)
{
if (nth + 1 == index)
{
if (head->next == NULL)
return (NULL);
else
current_node = head->next;
break;
}
nth++;
head = head->next;
}
return (current_node);
}
