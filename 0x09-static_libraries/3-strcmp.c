#include "main.h"

/**
 * _strcmp - func name
 * @s1: the parameter
 * @s2: the parameter
 * Return: returns dest
 */
int _strcmp(char *s1, char *s2)
{
int i, j;

for (i = 0; s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'); i++)
{
}
j = s1[i] - s2[i];
return (j);
}
