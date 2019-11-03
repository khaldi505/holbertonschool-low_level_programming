#include "lists.h"
#include <stdio.h>
/**
*add_node - returns the number of elements in a linked list_t list.
*@head: pointer to the first element
*@str: the stored char string
*Return: the number of elements in a linked list.
*/
list_t *add_node(list_t **head, const char *str)
{
head = malloc(sizeof(list_t));
if (head == NULL)
{
return (NULL);
}
while (head)
{
head->str = strdup(str);
head->next = NULL;
}
head->next = new;
free(headss);
return (new);
}
