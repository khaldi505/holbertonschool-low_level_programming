#include "holberton.h"
int print_last_digit(int)
{
  int ld = c % 10;
  if (ld < 0)
    ld = -ld;
  _putchar(ld + '0');
  return (ld);
}
