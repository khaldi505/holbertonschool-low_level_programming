#include "holberton.h"
/**
* rev_string - reverses a string 
*@s: pointer to a string
* Return: void
*/
void rev_string(char *s)
{
int o, m = 0;
char x;
while (*(s + m) != '\0')
{
m++;
}
m = m - 1;
for (o = 0; o <= (m / 2); o++)
{
x = *(s + o);
*(s + o) = *(s + (m - o));
*(s + (m - o)) = x;
}
}
