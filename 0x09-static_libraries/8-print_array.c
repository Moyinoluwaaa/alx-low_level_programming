#include "main.h"
/**
 * print_array - func name
 * @a: djd
 * @n: mty
 * Return: xdf
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
