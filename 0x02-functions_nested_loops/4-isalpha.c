#include "holberton.h"
 /**
  *_isalpha : check the code if c letter is lowercase or uppercase
  *@c : lower and uppercase letters
  *Return (1)
  */
int _isalpha(int c)
{
if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
return (1);
else
return (0);
}
