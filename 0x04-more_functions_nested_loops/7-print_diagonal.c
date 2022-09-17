#include "main.h"

/**
 * print_diagonal - func name
 * @n: parameter name
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
		putchar(' ');
	}
		putchar('\\');
		putchar('\n');
	}
	if (n <= 0);
	{
	putchar('\n');
	}
	return;
}
