#include "main.h"
/**
 * times_table - prints times table
 *
 * Return:void
 *
 */
void times_table(void)
{
int a = 0;
int b, multi;

while (a <= 9)
{
	b = 0;
	while (b <= 9)
	{
		multi = a * b;
		if (b == 0)
		{

			_putchar(multi + '0');
		}
		else if (multi < 10)
		{
			_putchar(' ');
			_putchar(multi + '0');
		}
		else
		{
			_putchar(multi / 10 + '0');
			_putchar(multi % 10 + '0');
		}
		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		b++;
	}
	_putchar('\n');
	a++;
}
}
