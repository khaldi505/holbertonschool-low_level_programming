#include "dog.h"
#include <stdio.h>
/**
*print_dog - prints a struct dog
*@d: pointer to the struct.
*Return: void
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("Name: (nil)");
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("owner %s\n", d->owner);
}
