#include "holberton.h"
/**
 *_memset - function that fills memory with a constant byte.
 *@s: char type
 *@b: char type
 *@n: unsigend int
 *Return:  a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
a = 0;
while (a <= n)
{
b = 0x01;
s[a] = b;
a++;
}
return (s);
}
