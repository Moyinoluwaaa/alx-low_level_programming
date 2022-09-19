#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

for (j = 0; s[j] != '\0'; j++)
{
}
for (i = j - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}