#include "sort.h"
/**
*bubble_sort - sorting an array using the bubble sort algo
*@array: is the array
*@size: is the size of the array
*Return: void
*/
void bubble_sort(int *array, size_t size)
{
size_t element;
int temp;
temp = 0;
size_t i;
for (i = 0; i != size - 1; i++)
{
for (element = 0; element < size - i - 1 ; element++)
{
if (array[element] > array[element + 1])
{
temp = array[element];
array[element] = array[element + 1];
array[element + 1] =  temp;
}
}
print_array(array, size);
}
}
