#include "holberton.h"
/**
*rev_string - revers the string
*@s: pointer to the first character on the string
*Return: nothing
*/
void rev_string(char *s)
{
char temp;
int len, i;
len = 0;
i = 0;
while (s[len] != '\0')
len++;
len--;
while (i < len)
{
temp = s[i];
s[i] = s[len];
s[len] = temp;
i++;
len--;
}
}
