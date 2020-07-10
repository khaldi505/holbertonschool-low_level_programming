#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;
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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
