#include "holberton.h"
/**
 *_memcpy - function that copies memory area
 *@dest : char type
 *@src : char
 *@n : unsigned int
 *Return: to the pointer dest and never back LOL
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
while (a < n)
{
src[a] = dest[a];
a++;
}
return (dest);
}
