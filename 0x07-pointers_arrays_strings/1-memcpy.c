#include "main.h"

/**
 * _memcpy - the func name
 * @dest: para1
 * @src: para2
 * @n: para3
 * Return: returns the value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
dest[i] = src[j];
}
}
return (dest);
}