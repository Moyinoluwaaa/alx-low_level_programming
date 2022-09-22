#include "main.h"

/**
 * *cap_string - func name
 * @n: param
 * Return: xdf
 */
char *cap_string(char *n)
{
int i, j;

char delimeters[] = " \t\n,;.!?\"(){}";

for (i = 0; n[i] != '\0'; i++)
{
if (n[0] >= 'a' && n[0] <= 'z')
n[0] = n[0] - 32;

for (j = 0; delimeters[j] != '\0'; j++)
if (n[i] == delimeters[j] && n[i + 1] >= 'a' && n[i + 1] <= 'z')
n[i + 1] = n[i + 1] - 32;
}
}
