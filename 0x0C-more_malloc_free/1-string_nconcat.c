#include "main.h"

/**
 * *string_nconcat - frees a 2 dimensional grid.
 * @s1: malloc
 * @s2: second
 * @n: number of strings in s2
 * Return: no return
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *f;
int i, a, b;

f = malloc(sizeof(char *) * (a + b + 1));
if (f == NULL)
return (NULL);
for (a = 0; s1[a]; a++)
;
if (s1 == NULL)
s1 = "";
for (b = 0; s2[b]; b++)
;
if (s2 == NULL)
s2 = "";
if (b > n)
b = n;
for (i = 0; i < a; i++)
f[i] = s1[i];
for (i = 0; i < b; i++)
f[a + i] = s2[i];
f[a + b] = '\0';
return (f);
}
