#include "dog.h"
#include <stdlib.h>
/**
*_strlen - is a function that computes the length of a string
*@string: pointer to the string
*Return: the length of the strign
*/
int _strlen(char *string)
{
int x = 0;
while (string[x] != '\0')
{
x++;
}
return (x);
}

/**
*new_dog - create new dog
*@name: dog name
*@age: dog age
*@owner: owner of the dog
*Return: new dog or null
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int x = 0;
dog_t *my_dog;
my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
{
free(my_dog);
return (NULL);
}
my_dog->name = malloc(sizeof(char *) * _strlen(name) + 1);
if ((*my_dog).name == NULL)
{
free(my_dog->name);
return (NULL);
}
else
{
while (name[x] != _strlen(name))
{
my_dog->name[x] = name[x];
x++;
}
my_dog->name[x] = name[x];
}
(*my_dog).owner = malloc(sizeof(char *) * _strlen(owner) + 1);
if ((*my_dog).owner == NULL)
{
free(my_dog->owner);
return (NULL);
}
x = 0;
while (owner[x] != '\0')
{
my_dog->owner[x] = owner[x];
x++;
}
my_dog->owner[x] = owner[x];
my_dog->age = age;
return (my_dog);
}
