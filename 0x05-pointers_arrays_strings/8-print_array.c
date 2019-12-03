#include "holberton.h"
#include <stdio.h>
/**
 * print_array - printing an array.
 * @a: array
 * @n: the number of elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while (a[i] != '\0')
{
if (i == n - 1)
printf("%d\n", a[i]);
else if (i < n)
printf("%d, ", a[i]);
i++;
}
}
