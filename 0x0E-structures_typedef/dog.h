#ifndef DOG_H
#define DOG_H
/**
*struct dog - a struct holding the dog information
*@name: char string
*@age: int type
*@owner: char string
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
