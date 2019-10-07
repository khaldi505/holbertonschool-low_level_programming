#include "holberton.h"
/**
 * _islower - check the lowercase character
 * @c: is the character we want to check
 * Return: returns 1 of c is lowercase , otherwise 0
 */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
