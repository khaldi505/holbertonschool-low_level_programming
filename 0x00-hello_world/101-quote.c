#include <stdio.h>
/**
*main - entry point (main function)
*
*Return: int.
*/
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i;
i = 0;
while (str[i] != '\0')
{
putchar (str[i]);
i++;
}
putchar ('\n');
return (1);
}
