#ifndef DECTOBIN_FUN
#define DECTOBIN_FUN
#include <stdio.h>
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
#endif
