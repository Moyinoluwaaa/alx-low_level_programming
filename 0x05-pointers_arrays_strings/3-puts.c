#include "main.h"
/**
 * void _puts - main func name
 * @str: para
 * Return: is void
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}