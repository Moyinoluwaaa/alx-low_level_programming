#include "main.h"
/**
 * **alloc_grid - creates array
 * @width: sizeof it
 * @height: wjw
 * Return: returns
 */

int **alloc_grid(int width, int height)
{
unsigned int i, j;
int **a;

if (width <= 0)
return (NULL);
if (height <= 0)
return (NULL);
a = malloc(sizeof(int) * (i + j));
if (a == NULL)
return (NULL);
for (i = 0; i < width; i++)
{
a[i] = malloc(width * sizeof(int));
for (j = 0; j < height; j++)
{
a[j] = malloc(height * sizeof(int));
a[i][j] = 0;
}
}
return (a);
}
