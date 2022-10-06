#include "main.h"

/**
 * *malloc_checked - frees a 2 dimensional grid.
 * @b: malloc
 *
 * Return: no return
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

