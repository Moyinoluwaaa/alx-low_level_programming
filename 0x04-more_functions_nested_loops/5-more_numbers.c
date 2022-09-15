#include "main.h"

/**
 * more_numbers - func name
 *
 * Return: ends
 */

void more_numbers(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
	i = 0;
	while (i <= 14)
	{
	if (i >= 10)
	{
		putchar(i / 10 + '0');
	}
		putchar(i % 10 + '0');
		i++;
	}
putchar('\n');
	}
return;
}
