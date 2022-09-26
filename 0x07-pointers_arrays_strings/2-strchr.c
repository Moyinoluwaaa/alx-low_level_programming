#include "main.h"

/**
 * _strchr - the func name
 * @s: para1
 * @c: para2
 * Return: returns the value
 */

char *_strchr(char *s, char c)
{
for (; *s != '\0'; s++)
{
if (*s == c)
{
return (s);
}
}
return (s);
}