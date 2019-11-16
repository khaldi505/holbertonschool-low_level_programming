#include "holberton.h"
/**
*read_textfile -  reads a text file and prints it to the POSIX standard output.
*@filename: pointer to the file name
*@letters: how many char in the file to print
*Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
{
return(0);
}
ssize_t r, w;
int i = open(filename, O_RDONLY);
if (i == -1)
{
return (0);
close(i);
}
char *buf;
buf = malloc(sizeof(char) * letters);
r = read(i, buf, letters);
close(r);
if (r == -1)
{
return (0);
}
w = write(STDOUT_FILENO, buf, letters);
close(w);
return (w);
}
