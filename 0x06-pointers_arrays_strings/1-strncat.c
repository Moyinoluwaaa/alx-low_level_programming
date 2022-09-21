#include "main.h"

/**
 * _strncat - func name
 * @dest: the parameter
 * @src: the parameter
 * @n: parameter 3
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i,j;

j = 0;
for (i = 0; i < 1000; i++)
{
if (dest[i] == '\0')
{
break;
}
j++;
}
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i + j] =  src[i];
}
dest[i + j] = '\0';
return(dest);
}