#include "holberton.h"
/**
 *reverse_array -reverses the content of an array of integers.
 *@a:int type
 *@n:int type
 *Return: 0
 */
void reverse_array(int *a, int n)
{
int i;
int k;
n = n - 1;
for (i = 0; i <= n ; i++)
{
k = a[i];
a[i] = a[n];
a[n] = k;
n--;
}
}
