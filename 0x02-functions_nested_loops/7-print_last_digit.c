#include "main.h"
/**
 * print_last_digit - funcc name
 * @n: parameter to test
 *
 * Return: ends the program
 */
int print_last_digit(int n)
{
	n = n %  10;
	if (n > 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else if (n == 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}
return (0);
}
