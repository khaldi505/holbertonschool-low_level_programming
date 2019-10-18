#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatenates all the arguments
 *@ac: int tyoe
 *@av: char type
 *Return: pointer
 */
char *argstostr(int ac, char **av)
{
char *c;
int r, b, k = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (r = 0; r < ac; r++)
{
for (b = 0; av[r][b] != '\0'; b++)
k++;
}
c = malloc(sizeof(char) * k + 1 + ac);
k = 0;
for (r = 0; r < ac; r++)
{
for (b = 0; av[r][b] != '\0'; b++)
{
c[k] = av[r][b];
k++;
}
c[k] = '\n';
k++;
}
return (c);
}
