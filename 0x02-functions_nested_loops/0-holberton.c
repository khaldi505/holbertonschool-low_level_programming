#include "holberton.h"
/**
 * main - the main function,prints Holberton, followed by a new
 *
 * Return: 0.
 */

int main(void)
{
int a;
char b[] = "Holberton";
for (a = 0 ; a < 9; a++)
{
_putchar(b[a]);
}
_putchar('\n');
return (0);
}
