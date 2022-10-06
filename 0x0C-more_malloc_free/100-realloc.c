#include "main.h"

/**
 * *_realloc - frees a 2 dimensional grid.
 * @ptr: malloc
 * @old_size: second
 * @new_size: ajah
 * Return: no return
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *rt;

if (new_size == old_size)
return (ptr);
if ((new_size == 0) && (ptr != NULL))
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
rt = malloc(new_size);
if (rt == NULL)
return (NULL);
}
if (new_size > old_size && (ptr != NULL))
{
rt = malloc(new_size);
if (rt == NULL)
return (rt);
for (i = 0; i < old_size; i++)
rt[i] = *((char *)ptr + 1);
free(rt);
}
return (rt);
}