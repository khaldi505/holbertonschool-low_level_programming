#include <unistd.h>
#include <string.h>
/**
*main - entry point (main function)
*
*Return: int.
*/
int main(void)
{
int i;
i = 0;
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
while (str[i] != '\0')
{
i++;
}
write(2, str, i + 1);
return (1);
}
