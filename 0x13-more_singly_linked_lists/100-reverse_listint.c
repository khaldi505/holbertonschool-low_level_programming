#include "lists.h"
/**
*reverse_listint - do what a rev func do
*@head: first
*Return: the first
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *pr = NULL;
listint_t *cur = *head;
listint_t *next = NULL;
while (cur != NULL)
{
next = cur->next;
cur->next = pr;
pr = cur;
cur = next;
}
*head = pr;
return (*head);
}
