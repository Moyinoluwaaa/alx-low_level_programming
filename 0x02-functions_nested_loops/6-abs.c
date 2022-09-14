#include "main.h"
/**
 * _abs - func name
 * @n: the dtype
 *
 * Return: ends the program
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (n * 1);
	}
	return (0);
}
