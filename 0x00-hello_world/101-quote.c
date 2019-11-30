#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
*main - entry point (main function)
*
*Return: int.
*/
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write (STDOUT_FILENO, str, strlen(str));
return (1);
}
