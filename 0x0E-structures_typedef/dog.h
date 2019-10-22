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
#endif
