#include "holberton.h"
/**
*create_file - create file
*@filename: pointer to the file name
*@text_content: text
*Return: return
*/
int create_file(const char *filename, char *text_content)
{
int i, w, c = 0;
if (filename == NULL)
return (-1);
i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (i == -1)
return (-1);
if (text_content == NULL)
return (1);
while (text_content[c] != '\0')
c++;
w = write(i, text_content, c);
if ((w == -1) && (w != c))
return (-1);
close(i);
return (1);
}
