#include "lists.h"
/**
*print_dlistint - print all the element in a doubly linked list
*@h: the head of the list
*Return: the number of the elements on a linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t elem = 0;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
elem++;
}
return (elem);
}
