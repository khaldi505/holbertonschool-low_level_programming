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
if ((tmpp->str == NULL) && (tmpp->len == '\0'))
{
printf("[0] (nil)\n");
tmpp = tmpp->next;
i++;
}
while (tmpp != NULL)
{
printf("[%d]%s\n", tmpp->len, tmpp->str);
tmpp = tmpp->next;
i++;
}
return (i);
}
