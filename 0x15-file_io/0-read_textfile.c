#include "holberton.h"
/**
*read_textfile -  reads a text file and prints it to the POSIX standard output.
*@filename: pointer to the file name
*@letters: how many char in the file to print
*Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int r, w;
if (filename == NULL)
return (0);
int i = open(filename, O_RDONLY);
if (i == -1)
return (0);
char *buf;
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
free(buf);
return (0);
}
r = read(i, buf, letters);
if (r == -1)
{
return (0);
}
w = write(STDOUT_FILENO, buf, r + 1);
if (w == -1)
return (0);
buf[r] += '\0';
close(i);
return (w);
}
