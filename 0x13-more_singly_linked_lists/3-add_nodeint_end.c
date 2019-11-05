#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint_end - add a node to the end of the list
*@head: pointer to the head
*@n: int type
*Return:  the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end, *temp;
end = malloc(sizeof(listint_t));
if (end == NULL)
return (NULL);
end->n = n;
end->next = NULL;
if (*head == NULL)
{
*head = end;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = end;
}
return (end);
}
