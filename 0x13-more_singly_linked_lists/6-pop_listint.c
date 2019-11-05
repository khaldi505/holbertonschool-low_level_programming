#include "lists.h"
/**
*pop_listint -  deletes the head node of a listint_t linked list.
*@head: pointer to the list
*Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
int nu;
listint_t *pop = (*head)->next;
if (*head == NULL)
return (0);
pop = (*head)->next;
n = (*head)->n;
free(head);
*head = pop;
return (nu);
}
