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
n = '0';
while (n <= '9')
{
putchar(n);
if (n <= '8')
{
putchar(' ');
putchar(separator);
}
n++;
}
putchar('\n');
return (0);
}
