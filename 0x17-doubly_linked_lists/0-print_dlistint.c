#include "lists.h"

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