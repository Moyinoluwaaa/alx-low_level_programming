#include "main.h"
/**
 * print_to_98 - func name
 * @n: param
 *
 * Return: returns any
 */
void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				putchar(',');
                putchar(' ');
			}
			putchar(i + '0');
		}
	}
	else
	{
		for (i = n; i <= 98 ; i++)
		{
			if (i != n)
			{
				putchar(',');
                putchar(' ');
			}
			putchar(i + '0');
		}
	}
	putchar('\n');
}
