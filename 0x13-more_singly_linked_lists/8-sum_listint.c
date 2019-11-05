#include "lists.h"
/**
*get_nodeint_at_index - returns the nth node of a linked list
*@head: pointer to the first element of the list (the list)
*@index: unsigned int
*Return: the sum of all the data (n) of a listint_t linked list
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