#include "main.h"

/**
 * print_square - Print square line dependent on the integer n.
 * @size: The number of lines using '#' characters to use per row and column
 * Return: Void.
 */
void print_square(int size)
{
	int x;
	int y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
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
