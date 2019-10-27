#include    <stdio.h>
#include <stdarg.h>
int sum_all(int n, ...)
{
int i;
va_list ap;
int sum;
va_start(ap, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
va_end(ap);
}
return (sum);
}
int main()
{
    int sum;
    sum = sum_all(5,5,90,10);
    printf("the value of variable sum = sum %d\n", sum);
    return(0);
}