#include "main.h"

/**
 * _strcat - func name
 * @dest: the parameter
 * @src: the parameter
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
int i, j, k;

for(i = 0; dest[i] != '\0'; i++);
for (j = 0; src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}