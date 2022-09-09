#include <stdio.h>
/**
* main - Entry point
*
* Return: ends the program
*/
int main(void)
{
	int alph = 'a';
	int upp = 'A';
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (upp <= 'Z')
	{
		putchar(upp);
		upp++;
        }
	putchar('\n');
	return (0);
}
