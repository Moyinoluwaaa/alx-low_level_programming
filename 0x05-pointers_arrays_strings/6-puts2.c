#include "main.h"
/**
 * puts2 - func name
 * @str: djd
 * Return: xdf
 */

void puts2(char *str)
{
int i;
    
for (i = 0; str[i] != '\0'; i+=2)
{
putchar(str[i]);
}
putchar('\n');
}
