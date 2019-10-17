#include <stdlib.h>
#include "holberton.h"
/**
*str_concat - concatenates two strings
*@s1: the first string
*@s2: the sec string
*Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int i, j, len;
j = 0;
i = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
s = malloc(sizeof(char) * (i + j));
for (len = 0; len <= i; len++)
s[len] = s1[len];
for (len = 0; len <= j; len++)
s[i + len] = s2[len];
return (s);
}


