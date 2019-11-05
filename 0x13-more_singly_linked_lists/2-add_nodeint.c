#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint - adds a new node at the beginning of a listint_t list.
*@head: head of the list
*@n:const int
*Return: Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *tmp;
if ((head == NULL) || (tmp == NULL))
{
return (NULL);
}
tmp = malloc(sizeof(listint_t));
tmp->n = n;
tmp->next = *head;
*head = tmp;
return (tmp);
}
