#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *op_add - returns the sum of a and b
 *@a: int
 *@b: int
 *Return: the sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 *op_sub - returns the differnence of a and b
 *@a: int
 *@b: int
 *Return: the differnece of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - returns the product of a and b
 *@a: int
 *@b: int
 *Return: the differnece of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 *op_div - returns the resutl of the division of by be
 *@a: int
 *@b: int
 *Return: the differnece of a and b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error");
}
else
{
return (a % b);
}
return (0);
}
