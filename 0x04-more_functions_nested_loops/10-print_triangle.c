#include "main.h"
/**
 * print_triangle - func name
 *
 * @size: parameter name
 * Return: ends
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
	for (k = size - 1 - i; k > 0; k--)
	{
		putchar(' ');
	}
	for (j = 0; j <= i; j++)
	{
		putchar('#');
	}
		putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}
