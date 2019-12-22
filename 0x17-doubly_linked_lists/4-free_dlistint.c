#include "lists.h"

void free_dlistint(dlistint_t *head)
{
while(head != NULL)
{
if (head->next == NULL)
free(head);
free(head->prev);
head = head->next;
}
}