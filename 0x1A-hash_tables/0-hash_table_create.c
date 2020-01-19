#include "hash_tables.h"
/**
*hash_table_create - creates a hash table.
*@size: the size of the array.
*Return: a pointer to the newly created hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
if (!(size))
return (NULL);
hash_table_t *new;
new = (hash_table_t *) malloc(sizeof(hash_table_t));
if (new == NULL)
return (NULL);
new->size = size;
new->array = malloc(sizeof(hash_node_t **));
if (new->array == NULL))
{
free(new);
return (NULL);
}
return (new);
}
