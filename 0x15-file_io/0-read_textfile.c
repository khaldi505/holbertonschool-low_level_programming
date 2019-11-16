#include "holberton.h"
/**
*read_textfile -  reads a text file and prints it to the POSIX standard output.
*@filename: pointer to the file name
*@letters: how many char in the file to print
*Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t r, w;
if (filename == NULL)
{
return(0);
}
int i = open(filename, O_RDONLY);
if (i == -1)
return (0);
char *buf;

buf = malloc(sizeof(char) * letters);
r = read(i, buf, letters);
if (r == -1)
{
free(buf);
return (0);
}
w = write(STDOUT_FILENO, buf, r);
if (w == -1 || w != r)
return (0);
close(i);
return (w);
}
