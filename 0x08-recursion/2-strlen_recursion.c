#include "holberton.h"
/**
 *_strlen_recursion - returns the length of a string.
 *@s: the string
 *Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
int res = 0;
if (*s != '\0')
{
res = _strlen_recursion(s + 1);
res++;
}
return (res);
}
