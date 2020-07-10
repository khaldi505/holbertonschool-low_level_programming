#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
*main - a function
*@argc: arg counter
*@argv: arg variable
*Return: 1
*/
int main(int argc, char *argv[])
{
int i;
int j;
int x = 0;
char *current;
char *result[argc - 1];
int another = 0;
int fresult = 0;
if (argc <= 1)
{
printf("0\n");
return (0);
}
for (i = 1; i != argc; i++)
{
current = argv[i];
for (j = 0; current[j] != '\0'; j++)
{
if (isdigit(current[j]) == 0)
{
printf("Error\n");
return (1);
}
}
result[x] = argv[i];
x++;
}

while (another != x)
{
fresult += atoi(result[another]);
another++;
}
printf("%d\n", fresult);
return(0);
}
