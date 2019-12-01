#include <stdio.h>
/**
 * main - the main function
 * prints all possible combinations of single-digit numbers.
 * Return: void
 */
int main(void)
{
int n;
n = '0';
while (n <= '9')
{
putchar(n);
if (n <= '8')
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
