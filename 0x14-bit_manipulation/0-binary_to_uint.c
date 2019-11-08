#include "holberton.h"
#include <stdlib.h>
/**
*binary_to_uint - convert from binary input to unsigned int
*@b: string of 1 and 0s
*Return: the sum of binary to uns int
*/
unsigned int binary_to_uint(const char *b)
{
const char *temp = b;
unsigned int len;
unsigned int sum = 0;
unsigned int s;
unsigned int r = 0;
if (temp == NULL)
return (0);
for (len = 0; temp[len] != '\0'; len++)
{
if ((temp[len] != '0') && (temp[len] != '1'))
return (0);
}
while (len)
{
if (temp[len - 1] == '1')
{
s = 1 << r;
sum = s + sum;
}
r++;
len--;
}
return (sum);
}


