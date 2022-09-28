#include "main.h"

/**
 * _strlen_recursion - the func name
 * @s: para1
 * Return: returns the value
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
