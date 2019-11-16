#include "holberton.h"
/**
*
*
*
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
while(text_content[co] != '\0')
co++;
w = write(i, text_content, co);
if (w == -1)
{
return (-1);
}
close(i);
return (1);
}