#include "main.h"

/**
 * _puts_recursion - the func name
 * @s: para1
 * Return: returns the value
 */

void _puts_recursion(char *s)
{
if (s[0] == '\0')
{
putchar('\n');
return;
}
putchar(s[0]);
_puts_recursion(s + 1);
}