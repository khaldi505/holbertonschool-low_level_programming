#include "holberton.h"
/**
*rev_string - revers the string
*@s: pointer to the first character on the string
*Return: nothing
*/
void rev_string(char *s)
{
int len;
len = 0;
int i;
i = 0;
char temp;
while (s[len] != '\0')
len++;
len--;
i = 0;
while (i < len)
{
temp = s[i];
s[i] = s[len];
s[len] = temp;
i++;
len--;
}
}
