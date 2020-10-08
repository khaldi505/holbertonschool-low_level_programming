#include "search_algos.h"
/**
 *print_array - a function will print from n th element until to the n
 *@array: array
 *@from: from where you want to start printing
 *@to: to when you want to stop
 *Return: nothing
 */
void print_array(int *array, size_t from, size_t to)
{
	printf("Searching in array: ");
	while (from <= to)
	{
		if (from == to)
			printf("%d", array[from]);
		else
			printf("%d, ", array[from]);
		from++;
	} printf("\n");
}

/**
*binary_search - a function that do binary search on array.
*@array: the array we're going to fetch.
*@size: size of the array.
*@value: the value we're looking for.
*Return: the index of the Value.
*/
int binary_search(int *array, size_t size, int value)
{
size_t L = 0;
size_t R = size - 1;
size_t m;
if (!array || !value)
return (-1);
print_array(array, L, R);
while (L <= R)
{
m = (L + R) / 2;
if (array[m] < value)
{
L = m + 1;
if (R > 0 && L <= R)
print_array(array, L, R);
}
else if (array[m] > value)
{
R = m - 1;
print_array(array, L, R);
}

else
{
return (m);
}

}


return (-1);
}
