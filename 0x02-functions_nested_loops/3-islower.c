#include "holberton.h"
 /**
 *_islower - check the lowercase
 *@c: is the character we want to check
 *return: 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
