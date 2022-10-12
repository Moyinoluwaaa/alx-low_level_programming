#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: param
 * @f: param
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
