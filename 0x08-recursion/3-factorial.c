#include "holberton.h"
/**
 * factorial - function that returns the factorial a given numer
 *@n: int type
 *Return: the factorial of a given number.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
