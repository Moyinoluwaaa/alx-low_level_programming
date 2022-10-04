#include "main.h"
/**
 * **alloc_grid - creates array
 * @width: sizeof it
 * @height: wjw
 * Return: returns
 */

int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **a;

if (width <= 0)
return (NULL);
if (height <= 0)
return (NULL);
a = malloc(sizeof(int) * (i + j));
if (a == NULL)
return (NULL);
for (; i < width; i++)
{
a[i] = malloc(width * sizeof(int));
for (; j < height; j++)
{
a[j] = malloc(height * sizeof(int));
a[i][j] = 0;
}
}
return (a);
}
