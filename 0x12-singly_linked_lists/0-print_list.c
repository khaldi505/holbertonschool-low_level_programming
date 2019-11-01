#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*print_list - prints all the elements of a list_t list.
*@h: pointer to the node
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t i = 0;
const list_t *tmpp;
tmpp = h;
if (tmpp == NULL)
{
return (0);
}
while (tmpp != NULL)
{
if (tmpp->str == NULL)
{
printf("[%d] (nil)\n", tmpp->len);
tmpp = tmpp->next;
i++;
}
else
{
printf("[%d] %s\n", tmpp->len, tmpp->str);
tmpp = tmpp->next;
i++;
}
}
return (i);
}
