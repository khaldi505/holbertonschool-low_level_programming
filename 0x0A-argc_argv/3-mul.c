#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point , main function
 *@argc: int type
 *@argv: char type
 *Return: 0 or 1
 *
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
int i = atoi(argv[2]);
int j = atoi(argv[1]);
printf("%d\n", i * j);
return (0);
}
