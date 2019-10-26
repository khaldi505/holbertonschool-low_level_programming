#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all -  a function that returns the sum of all its parameters.
 *@n: the number of arguments
 *Return: returns the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
va_list valsum;
unsigned int i;
int sum = 0;
va_start(valsum, n);
for (i = 0; i < n; i++)
{
sum += va_arg(valsum, unsigned int);
}
return (sum);
}
