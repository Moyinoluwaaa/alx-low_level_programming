#include "main.h"

/**
 * _factorial - the func name
 * @n: para1
 * Return: returns the value
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return(n * factorial(n-1));
}
