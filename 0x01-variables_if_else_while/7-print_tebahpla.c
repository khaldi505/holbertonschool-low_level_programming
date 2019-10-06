#include <stdio.h>
/**
 * main - the main function.
 * 
 * Return: 0
 */
int main(void)
{
char rev;
for (rev = 'z'; rev >= 'a'; rev--)
{
putchar(rev);
}
putchar('\n');
return (0);
}
