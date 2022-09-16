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
       
	w = 0;
	while (w < n)
	{
		w++;
		putchar('_');
	}
	putchar('\n');
}
