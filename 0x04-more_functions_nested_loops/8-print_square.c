#include "main.h"

/**
 * print_square - func name
 * @size: param name
 *
 * Return: ends
 */

void print_square(int size)
{ 
	int i, j;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size <= 0);
	{
		putchar('\n');
	}	 
	return;
}
