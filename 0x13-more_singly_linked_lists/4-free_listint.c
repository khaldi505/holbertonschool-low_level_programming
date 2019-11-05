#include "lists.h"
#include <stdlib.h>
/**
*free_listint - free nodes in the linked list
*@head: pointer to the first element of the list (the list)
*Return: void
*/
void free_listint(listint_t *head)
{
listint_t *tmp;
if (head == NULL)
{
return;
}
while (head)
{
tmp = head;
head = head->next;
free(tmp);
}
}
