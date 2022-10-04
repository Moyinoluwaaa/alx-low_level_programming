#include "main.h"
/**
 * *create_array - creates array
 * @size: sizeof it
 * @c: uisj
 * Return: returns
 */

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;

s = malloc(sizeof(c) * size);
if (size == 0)
{
return (NULL);
}
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}