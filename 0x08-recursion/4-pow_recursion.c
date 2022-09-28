#include "main.h"

/**
 * _pow_recursion - find x raised to power y
 * @x: para1
 * @y: para2
 * Return: returns the value
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x,y-1));
}