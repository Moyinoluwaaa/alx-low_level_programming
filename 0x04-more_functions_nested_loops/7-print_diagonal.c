#include "main.h"

/**
 * print_line - func name
 * @n: parameter name
 *
 * Return: void
 */
void print_line(int n)
{
	int i,j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
		putchar(' ');
		}
		putchar('\n');
		putchar('\\');
	}
	putchar('\n');
}
