#include "main.h"

/**
 * print_line - func name
 * @n: parameter name
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('\n');
		putchar('\\');
	}
	putchar('\n');
}
