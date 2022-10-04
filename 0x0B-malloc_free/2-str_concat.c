#include "main.h"
/**
 * *str_concat - creates array
 * @s1: sizeof it
 * @s2: wjw
 * Return: returns
 */

char *str_concat(char *s1, char *s2)
{
char *u;
unsigned int i = 0, j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

u = malloc(sizeof(char) * (i + j + 1));

if (u == NULL)
{
free(u);
return (NULL);
}
for (; s1[i] != '\0'; i++)
{
u[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; i++, j++)
{
u[i] = s2[j];
}
return (u);
}
