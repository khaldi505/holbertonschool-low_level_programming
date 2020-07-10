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
dog_t *my_dog;
my_dog = malloc(sizeof(dog_t));
if (!my_dog)
return (NULL);
(*my_dog).name = malloc(sizeof(char *) * _strlen(name));
if (!(*my_dog).name)
return (NULL);
(*my_dog).name = name;
(*my_dog).age = age;
(*my_dog).owner = malloc(sizeof(char *) * _strlen(owner));
if (!(*my_dog).owner)
return (NULL);
(*my_dog).owner = owner;

return (my_dog);
}
