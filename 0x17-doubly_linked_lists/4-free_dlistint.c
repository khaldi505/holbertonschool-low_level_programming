#include "lists.h"
/**
*free_dlistint -  a function that free a dlistint_t list.
*@head: the head of the list
*Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
if (head->next == NULL)
free(head);
free(head->prev);
head = head->next;
}
}
