#include "function_pointers.h"
/**
 *print_name - a function that prints a name.
 *@name: char
 *@f: pointer to a function
 *return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
return;
}
