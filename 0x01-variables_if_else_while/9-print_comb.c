#include <stdio.h>
/**
 * main - the main function
 * prints all possible combinations of single-digit numbers.
 * Return: void
 */
int main(void)
{
int separator;
separator = 44;
int n;
n = 48;
while (n <= 57)
{

putchar(n);
putchar(' ');
if (n <= 56)
putchar(separator);

n++;
}
putchar('\n');
return (0);
}
