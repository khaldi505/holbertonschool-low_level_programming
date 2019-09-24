#include "holberton.h"
/**
 * _islower - check the lowercase
 * @c: is the character we want to check
 * Return: 0
 */

int _islower(int c)
if (c >= 'a' && c <= 'z')
return (1);
else
if (c >= 'A' && c <= 'Z')
return (0);
