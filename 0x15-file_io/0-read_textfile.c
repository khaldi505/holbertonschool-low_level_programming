#include "holberton.h"
/**
*read_textfile -  reads a text file and prints it to the POSIX standard output.
*@filename: pointer to the file name
*@letters: how many char in the file to print
*Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
unsigned int r, w;
int i = open(filename, O_RDONLY);
if (!i)
{
return (-1);
close(i);
}
char *buf;
buf = malloc(sizeof(char) * letters);
r = read(i, buf, letters);
if (!r)
{
return (-1);
}
w = write(1, buf, letters);
close(w);
return (w);
}
