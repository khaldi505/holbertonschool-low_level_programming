#include "lists.h"
/**
 *dlistint_len - is a function that returns the length of a list
 *@h: head of the list , the first node
 *Return: how many elementes in the list 
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t elements = 0;
while (temp != NULL)
{
elements++;
temp = temp->next;
}
return (elements);
}
