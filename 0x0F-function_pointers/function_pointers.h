#ifndef HEADER_H
#define HEADER_H
#include <stddef.h>
int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
#define size_t int
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
