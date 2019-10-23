#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - main function
* @argc: num of argument
* @argv: array of argument
* Return: pointer
*/

int main(int argc, char *argv[])
{

int (*operation)(int, int);
int f, u, n;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

operation = get_op_func(argv[2]);
u = atoi(argv[1]);
n = atoi(argv[3]);

if (operation == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
if (n == 0 && (operation == op_div || operation == op_mod))
{
printf("Error\n");
exit(100);
}

f = operation(u, n);
printf("%d\n", f);
return (0);
}

