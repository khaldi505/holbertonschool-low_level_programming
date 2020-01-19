#include "hash_tables.h"
/**
*hash_table_create - creates a hash table.
*@size: the size of the array.
*Return: a pointer to the newly created hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new;
new = malloc(sizeof(hash_table_t));
if (new == NULL)
return (NULL);
if (size == 0)
return (NULL);
new->size = size;
new->array = malloc(sizeof(hash_node_t *) * size);
if (new->array == NULL)
{
free(new);
return (NULL);
}
return (new);
}
