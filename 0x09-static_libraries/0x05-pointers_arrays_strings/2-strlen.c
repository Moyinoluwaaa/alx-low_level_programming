#include "main.h"
/**
 * _strlen - func name
 * @s: parameter
 * Return: value
 */
int _strlen(char *s)
{
int w;
int le = 0;

for (w = 0;  s[w] != '\0' ; w++)
{
le++;
}
return (le);
}
