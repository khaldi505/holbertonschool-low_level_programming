#include <stdio.h>
#include "lists.h"
/**
*print_listint - _len - print intgers from the node
*@h: pointer to the list (the first element of the list)
*Return: the number of elements
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
if (h == NULL)
{
return (i);
}
while (h != NULL)
{
i++;
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
