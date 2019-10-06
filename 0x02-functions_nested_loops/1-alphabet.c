#include "holberton.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return : void
 */
void print_alphabet(void)
{
int abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
}
_putchar('\n');
}
