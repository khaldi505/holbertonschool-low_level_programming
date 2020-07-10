#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
*new_dog - create new dog
*@name: dog name
*@age: dog age
*@owner: owner of the dog
*Return: new dog or null
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
my_dog = malloc(sizeof(dog_t));
if (!my_dog)
return (NULL);
(*my_dog).name = malloc(sizeof(char *) * strlen(name));
if (!(*my_dog).name)
return (NULL);
(*my_dog).name = name;
(*my_dog).age = age;
(*my_dog).owner = malloc(sizeof(char *) * strlen(owner));
if (!(*my_dog).owner)
return (NULL);
(*my_dog).owner = owner;

return (my_dog);
}
