#include "holberton.h"
/**
*create_file - create file
*@filename: pointer to the file name
*@text_content: text
*Return: return
*/
int create_file(const char *filename, char *text_content)
{
int i, w;
if (filename == NULL)
{
return (-1);
}
i = open(filename, O_CREAT | O_RDWR, 600);
w = write(i, text_content, sizeof(text_content));
if (w == -1)
return (-1);
close(i);
return (1);
}
