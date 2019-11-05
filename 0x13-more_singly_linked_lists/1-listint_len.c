#include <stdlib.h>
#include "lists.h"
/**
*listint_len - print intgers from the node
*@h: pointer to the list (the first element of the list)
*Return: the number of elements 
*/
size_t listint_len(const listint_t *h)
{
size_t count;
while(h != NULL)
{
count++;
h = h->next;
}
return (count);
}
