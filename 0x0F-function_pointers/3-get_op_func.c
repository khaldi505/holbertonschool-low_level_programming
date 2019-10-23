#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
/**
 *get_op_func - function that selects the correct function to preform
 *@s: char
 *Return: int
 */
int (*get_op_func(char *s))(int, int b)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op)
{
if (*(ops[i].op) == *s)
return (ops[i].f);
i++;
}
return (NULL);
}
