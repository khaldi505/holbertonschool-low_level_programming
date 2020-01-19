#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
hash_table_t *hash_table_create(unsigned long int size)
{
if (size == 0)
return (NULL);
hash_table_t *new;
new = (hash_table_t *) malloc(sizeof(hash_table_t));
if (new == NULL)
return(NULL);

new->size = size;
return(new);

}