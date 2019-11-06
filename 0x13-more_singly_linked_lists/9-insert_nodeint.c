#include "lists.h"
/**
*insert_nodeint_at_index - insert a new node at a given position
*@idx: the index of the list
*@n: uns int
*@head: first node (list)
*Return: null or adress
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *tmp = *head;
if (tmp == NULL)
{
return (NULL);
}
while ((tmp != NULL) && (idx != i))
{
i++;
tmp = tmp->next;
}
tmp->n = n;
return (tmp);
}
