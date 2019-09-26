#include "holberton.h"
/**
 *_isupper(int c)
 *checks for an uppercase letter. 
 *Returns 1 if c is uppercase
 *Returns 0 otherwis
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
