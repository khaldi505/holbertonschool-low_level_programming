#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - function that executes a function given
 *@array: size_t type
 *@action: pointer to function
 *@size: size of the array
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
return;
}
}
