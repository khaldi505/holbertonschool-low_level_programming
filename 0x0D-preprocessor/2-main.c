#include <stdio.h>
#ifndef FILE_NAME
#define FILE_NAME __FILE__
#endif
int main(void)
{
printf("%s\n", FILE_NAME);
return(0);
}
