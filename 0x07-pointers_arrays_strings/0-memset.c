#include "main.h"

/**
 * _memset - the func name
 * @s: para1
 * @b: para2
 * @n: para3
 * Return: returns the value
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
