#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - a function that prints the sum
* of the two diagonals of a square matrix of integers.
*@a: array
*@size: length of the array
*/
void print_diagsums(int *a, int size)
{
int x = 0;
int i;
int result = 0;
int sum = a[x];
for (i = 0; i < size; i++)
{
sum += *(a + i * size + i);
result += *(a + (i * size) + (size - 1 - i));
}
printf("%d, %d\n", sum, result);
}
