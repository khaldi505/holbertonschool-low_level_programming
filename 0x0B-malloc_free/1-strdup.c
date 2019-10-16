#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - copy a string
* @str: pointer to string
* Return: pointer
*/
char *_strdup(char *str)
{
char *p;
int i = 0;
int j = 0;
if (str == NULL)
{
return (NULL);
}
while (str[i])
i += 1;
p = malloc(i * sizeof(char) + 1);
if (p == NULL)
return (NULL);
while (*str)
{
p[j] = *str;
str++;
j += 1;
}
p[j] = *str;
return (p);
}
