#include "holberton.h"
/**
*append_text_to_file - append text to file func
*@filename: pointer to the file name
*@text_content: text content on the file
*Return: 1 or -1 in case if it fails
*/
int append_text_to_file(const char *filename, char *text_content)
{
int i, w, co;
if (filename == NULL)
return (-1);
i = open(filename, O_WRONLY | O_APPEND);
if (i == -1)
{
return (-1);
}
if (text_content == NULL)
return (1);
while (text_content[co] != '\0')
co++;
w = write(i, text_content, co);
if (w == -1)
{
return (-1);
}
close(i);
return (1);
}
