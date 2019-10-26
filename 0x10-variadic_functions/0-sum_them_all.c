#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all -  a function that returns the sum of all its parameters.
 *@n: the number of arguments
 *Return: returns the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{

va_list valsum;
unsigned int i;
int sum = 0;
va_start(valsum, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(valsum, unsigned int);
va_end(valsum);
}
return (sum);
}
