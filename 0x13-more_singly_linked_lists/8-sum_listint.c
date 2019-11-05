#include "lists.h"
/**
*get_nodeint_at_index - returns the nth node of a linked list
*@head: pointer to the first element of the list (the list)
*@index: uns int
*Return: nth of the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int indexx;
for (indexx = 0; indexx < index && head != NULL; indexx++)
{
head = head->next;
}
return (head);
}