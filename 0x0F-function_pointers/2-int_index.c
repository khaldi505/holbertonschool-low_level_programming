#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - a function that searches for an integer.
 *@array : array
 *@size : the number of elements
 *@cmp: pointer to function
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size ; i++)
if (cmp(array[i]))
return (i);
}
if (size <= 0)
{
return (-1);
}
return (-1);
}
