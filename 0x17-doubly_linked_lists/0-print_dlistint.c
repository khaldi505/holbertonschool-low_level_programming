#include "lists.h"
/**
 *print_dlistint - prints all the elements of a dlistint_t list.
 *@h: pointer to the header of the list
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t elements = 0;
const dlistint_t *temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
elements++;
}
return (elements);
}
