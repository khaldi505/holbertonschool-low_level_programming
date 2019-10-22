#ifndef DOG_H
#define DOG_H
/**
 *struct dog - struct
 *@name: pointer to char
 *@age: int type
 *@owner: char
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
