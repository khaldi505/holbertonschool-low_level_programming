#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*add_node - returns the number of elements in a linked list_t list.
*@head: pointer to the first element
*@str: the stored char string
*Return: the number of elements in a linked list.
*/
list_t *add_node(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *tmp;
tmp = (malloc(sizeof(list_t)));
if ((str == NULL) || (tmp->str != NULL))
{
return (NULL);
}
while (str[len])
len++;
tmp->str = strdup(str);
tmp->len = len;
tmp->next = *head;
*head = tmp;
return (tmp);
}
