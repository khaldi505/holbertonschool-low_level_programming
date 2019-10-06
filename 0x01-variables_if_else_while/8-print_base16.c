#include <stdio.h>
/**
 * main - the main funcion
 *@i; char type
 *@j; char type
 * Return: 0
 */
int main(void)
{
int i;
int j;
for (i = '0'; i <= '9'; i++)
{
putchar (i);
}
for (j = 'a'; j <= 'f'; j++)
{
putchar (j);
}
putchar ('\n');
return (0);
}
