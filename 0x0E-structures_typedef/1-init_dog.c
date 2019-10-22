#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - initializes a variable of type struct dog
 *@d: a struct
 *@name: char type
 *@age: float
 *@owner: age
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
if (d == 0)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
