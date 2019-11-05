#include "lists.h"
/**
*pop_listint -  deletes the head node of a listint_t linked list.
*@head: pointer to the list
*Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
int nu = 0;
listint_t *pop = NULL;
if (*head != NULL)
{
pop = (*head)->next;
nu = (*head)->n;
free(*head);
*head = pop;
}
return (nu);
}
