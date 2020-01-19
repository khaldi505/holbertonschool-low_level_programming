#include "hash_tables.h"
/**
*hash_table_create - a function that creates a hash table.
*@size: the size of the array.
*Return: Returns a pointer to the newly created hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
if (size == 0)
return (NULL);
hash_table_t *new;
new = malloc(sizeof(hash_table_t));
if (new == NULL)
return (NULL);
new->size = size;
new->array = malloc(sizeof(hash_table_t) * size);
return(new);
}