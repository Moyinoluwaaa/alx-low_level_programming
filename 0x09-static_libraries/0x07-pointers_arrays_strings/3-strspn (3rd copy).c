#include "main.h"

/**
 * _strspn - the func name
 * @s: para1
 * @accept: para2
 * Return: returns the value
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
{
return (i);
}
}
}
return (i);
}
