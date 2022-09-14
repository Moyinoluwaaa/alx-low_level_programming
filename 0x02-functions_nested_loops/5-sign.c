#include "main.h"

/**
* print_sign - the func name
* @n: the parameter
*
* Return: ends the program
*/
int print_sign(int n)
{
if (n >= 0)
{
	putchar('+');
	putchar('1');
}
else if(n <= 0)
{
	putchar('-');
        putchar('1');
}
else if (n == 0)
{
	putchar('0');
	putchar('0'); 
}
return (0);
}

