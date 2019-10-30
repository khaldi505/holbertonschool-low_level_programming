#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
*init_dog - initialize a variable of type struct dog
*@d: pointer to the new struct
*@name: char string
*@age: float type
*@owner: char string
*Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
(*d).name = name;
d->owner = owner;
(*d).age = age;
}
