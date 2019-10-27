#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
*print_numbers - function that prints numbers, followed by a new line.
*@n: number of arguments
*@separator: separator is the string to be printed between numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
