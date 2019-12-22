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
unsigned int nth;
nth = 0;
if (head == NULL)
return (NULL);
while (head != NULL)
{
if (nth + 1 == index)
{
current_node = head->next;
break;
}
nth++;
head = head->next;
}
if (current_node == NULL)
return (NULL);
return (current_node);
}
