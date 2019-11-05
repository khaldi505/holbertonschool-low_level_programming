#include "lists.h"
/**
*sum_listint - returns the sum of all the data (n) of a listint_t linked list.
*@head: pointer to the first elemihebent of the list (the list)
*Return: the sum of all the data (n) of a listint_t linked list
*/
int sum_listint(listint_t *head)
{
int s = 0;
listint_t *tmp;
if (head == NULL)
return (NULL);
tmp = head;
while (tmp != NULL)
{
s += tmp->n;
tmp = tmp->next;
}
return (s);
}
