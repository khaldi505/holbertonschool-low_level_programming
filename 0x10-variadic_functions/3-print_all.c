#include "variadic_functions.h"
/**
*print_all - prints anything.
*@format: list of types of arguments passed to the function
*Return: void.
*/
void print_all(const char * const format, ...)
{
va_list atp;
int j = 0;
int i;
char c;
char *s;
float f;
va_start(atp, format);
while (format && format[j])
{
switch (format[j])
{
case 'c':
c = va_arg(atp, int);
printf("%c", c);
break;
case 'i':
i = va_arg(atp, int);
printf("%d", i);
break;
case 'f':
f = va_arg(atp, double);
printf("%f", f);
break;
case 's':
s = va_arg(atp, char *);
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
}
j++;
}
va_end(atp);
printf("\n");
}
