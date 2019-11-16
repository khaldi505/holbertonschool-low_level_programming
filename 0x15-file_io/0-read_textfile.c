#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
/**
*read_textfile -  reads a text file and prints it to the POSIX standard output.
*@filename: pointer to the file name
*@letters: how many char in the file to print
*Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
int r, w, i;

if (filename == NULL)
return (0);
i = open(filename, O_RDONLY);
if (i == -1)
return (0);
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
w = write(STDOUT_FILENO, buf, r);
if (w == -1)
return (0);
close(i);
return (w);
}
