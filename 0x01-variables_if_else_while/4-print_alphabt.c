#include <stdio.h>
/**
* main - Entry point
*
* Return: ends the program
*/
int main(void)
{
	for (int alph='a'; alph <= 'z'; alph++)
	{
		if (alph == 'q' || alph == 'e')
	{
		continue;
	}
	putchar(alph);
	}   
	putchar('\n');
	return (0);
}

