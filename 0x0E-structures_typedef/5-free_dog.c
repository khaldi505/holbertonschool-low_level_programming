#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the alocated memory for the structer d
 * @d: pointer to the structer
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
