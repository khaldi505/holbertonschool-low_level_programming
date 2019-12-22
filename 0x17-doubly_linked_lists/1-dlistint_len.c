#include "lists.h"
/**
*print_dlistint - returns the number of elements in a linked list
*@h: the head of the list
*Return: number of elements on a list
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t elem = 0;
while (temp != NULL)
{
elem++;
temp = temp->next;
}
return (elem);
}
