#include <stdio.h>
/**
* main - Entry point
*
* Return: ends the program
*/
int main(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
