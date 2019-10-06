#include <stdio.h>
/**
 * main - the main funcion
 *@i; char type
 *@j; char type
 * Return: 0
 */
int main(void)
{
char numbers;
int aTof;
for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar (numbers);
}
for (aTof = 'a'; aTof < 'g'; aTof++)
{
putchar (aTof);
}
putchar ('\n');
return (0);
}
