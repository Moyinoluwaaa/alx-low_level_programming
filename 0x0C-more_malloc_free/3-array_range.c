#include "main.h"

/**
 * *array_range - frees a 2 dimensional grid.
 * @min: malloc
 * @max: second
 * Return: no return
 */

int *array_range(int min, int max)
{
int *e, n, i;

n = max - min + 1;
e = malloc(sizeof(int) * n);
if (min > max)
return (NULL);
if (e == NULL)
return (NULL);
for (i = 0; i < n; i++)
e[i] = min + i;
return (e);
}