#include "main.h"

/**
 * _strspn - the func name
 * @s: para1
 * @accept: para2
 * Return: returns the value
 */

void _puts_recursion(char *s)
{
    if (s[0] == '\0')
    {
        putchar('\n');
        return;
    }
    putchar(s[0]);
    _puts_recursion(s + 1);
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}