#include "main.h"

/**
 * _strspn - the func name
 * @s: para1
 * @accept: para2
 * Return: returns the value
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
return (s + i);
}
}
} 
return (0);
}