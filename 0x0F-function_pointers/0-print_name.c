#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: param
 * @f: param
 * Return: rer
 */
void print_name(char *name, void (*f)(char *))
{
if (f && name)
f(name);
}
