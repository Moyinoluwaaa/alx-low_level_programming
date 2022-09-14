#include "main.h"
/**
 * print_to_98 - func name
 * @n: param
 *
 * Return: returns any
 */
void print_to_98(int n)

{
	for (n = 0; n < 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
}
