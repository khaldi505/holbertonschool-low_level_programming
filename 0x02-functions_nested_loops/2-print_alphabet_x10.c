#include <stdio.h>
#include "holberton.h"
/**
 *print_alphabet_x10 - prints the alphabet from a to z
 *
 *Return: 0;
 */
void print_alphabet_x10(void)
{
int ab, i;
ab = 'a';
for (i = 0; i < 10; i++)
{
while (ab <= 'z')
{
_putchar(ab);
ab++;
}
_putchar('\n');
ab = 'a';
}
}
