#include "main.h"

/**
 * print_line - func name
 * @n: param name
 *
 * Return: ends
 */

void print_line(int n)
{ 
	int w;
       
	for (w = 0; w < n; w++)
	{
		putchar('_');
	}
	putchar('\n');
}
