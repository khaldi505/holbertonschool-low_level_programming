#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n, o;
srand(time(0));
n = rand() - RAND_MAX / 2;
o = n % 10;
if (o > 5)
printf("Last digit of %d and %d is greater than 5/n", n, o);
else if (o == 0)
printf("Last digit %d and %d is 0/n", n, o);
else
printf("Last digit of %d and %d is less than 6 and not 0/n", n, o);
return (0);
}
