#include "holberton.h"
/**
 * _islower - check the lowercase
 * @c: is the character we want to check
 * Return: 0
 */

int _islower(int c)
{
if ((c >= 97) && (c <= 122))
return (1);
else
return (0);
}

