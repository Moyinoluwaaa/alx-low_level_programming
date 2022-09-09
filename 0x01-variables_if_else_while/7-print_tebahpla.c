#include <stdio.h>
/**
* main - Entry point
*
* Return: ends the program
*/
int main(void)
{
	int e = 'z';

	for (; e >= 'a'; e--)
	{
	putchar(e);
	}
	putchar('\n');
	return (0);
}
