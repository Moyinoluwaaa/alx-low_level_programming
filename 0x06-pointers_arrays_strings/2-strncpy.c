#include "main.h"

/**
 * _strncat - func name
 * @dest: the parameter
 * @src: the parameter
 * @n: parameter 3
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}