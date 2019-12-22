#include "lists.h"
/**
*add_dnodeint_end - function that adds a new node at the end of a list
*@head: pointer to pointer to the head of the list
*@n: the element we want to insert inside of the node 
*Return: return the new node at the end of the list or null
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *end_node;
dlistint_t *last_node;
last_node = (*head);
end_node = malloc(sizeof(dlistint_t));
if (end_node == NULL)
return (NULL);
end_node->n = n;
end_node->next = NULL;
if (*head == NULL)
{
end_node->prev = NULL;
end_node->next = *head;
*head = end_node;
return (end_node);
}
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = end_node;
end_node->prev = last_node;
return (end_node);
}
