#include "main.h"
/**
 * *leet - func name
 * @n: parameter
 * Return: xdf
 */

char *leet(char *n)
{
 int i;
int j;
char l[] = "ol_ea__t";

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (n[i] == l[j] || n[i] == (l[j] - 32))
{
n[i] = j + '0';
}
}
}
return (n);
}