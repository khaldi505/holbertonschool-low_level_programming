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
x++;
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
(*my_dog).name = malloc(sizeof(char *) * _strlen(name));
if (!(*my_dog).name)
return (NULL);
while (name[x] != '\0')
{
(*my_dog).name[x] = name[x];
x++;
}
(*my_dog).age = age;
(*my_dog).owner = malloc(sizeof(char *) * _strlen(owner));
if (!(*my_dog).owner)
return (NULL);
x = 0;
while (owner[x] != '\0')
{
(*my_dog).owner[x] = owner[x];
x++;
}
if (my_dog->owner == NULL || my_dog->name == NULL)
{
free(my_dog->name);
free(my_dog->owner);
free(my_dog);
return (NULL);
}


return (my_dog);
}
