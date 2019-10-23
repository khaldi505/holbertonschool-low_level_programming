#ifndef HEADER_H
#define HEADER_H
void print_name(char *name, void (*f)(char *));
#define size_t unsigned int
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
