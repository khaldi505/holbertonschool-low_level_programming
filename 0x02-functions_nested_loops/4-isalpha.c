#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c : the variable we want to check
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'z')))
return (1);
else
return (0);
}
