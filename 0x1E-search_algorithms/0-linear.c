#include "search_algos.h"
/**
*linear_search - a function that do a
*linear_search on a array to find a spesfic value
*@array: an array to fetch
*@size: size of the array
*@value: the value we're looking for
*Return: the first element that equales to the value var
*/

int linear_search(int *array, size_t size, int value)
{
size_t counter;
if (!value || !array)
return (-1);

counter = 0;
while (counter < size)
{
if (array[counter] == value)
{
printf("Value checked array[%lu] = [%d]\n", counter, array[counter]);
return (counter);
}
printf("Value checked array[%lu] = [%d]\n", counter, array[counter]);
counter++;
}
return (-1);
}
