#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * **alloc_grid - allocate a memory for 2 dimensional array x
 *@width: int
 *@height: int
 *Return: a pointer to 2 dimensional arrays
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **p;
if (width <= 0 || height <= 0)
{
return  (NULL);
}
p = malloc(height * sizeof(int *));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (j = 0; j < i;  j++)
free(p[j]);
free(p);
return (NULL);
}
for (j = 0; j < width; j++)
{
p[i][j] = 0;
}
}
return (p);
}
