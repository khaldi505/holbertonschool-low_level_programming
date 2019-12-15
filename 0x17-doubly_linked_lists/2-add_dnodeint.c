#include "lists.h"
/**
 *add_dnodeint - function that adds a new node
 *@head: pointer to pointer to the head of list
 *@n: a value to insert to the node
 *Return: the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
new->prev = NULL;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (*head);
}
