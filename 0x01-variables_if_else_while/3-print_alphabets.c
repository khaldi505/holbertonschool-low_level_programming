#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
putchar (ch);
ch = ch + 1;
}
ch = 'A';
while (ch <= 'Z')
{
putchar (ch);
ch = ch + 1;
}
putchar ('\n');
return (0);
}
