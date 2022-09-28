#include "main.h"

/**
 * _print_rev_recursion - the func name
 * @s: para1
 * Return: returns the value
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
_print_rev_recursion(s + 1);
	putchar(*s);
}