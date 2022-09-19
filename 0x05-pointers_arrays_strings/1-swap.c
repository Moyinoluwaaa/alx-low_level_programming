#include "main.h"
/**
 * void swap_int - main fubnc
 * @a: a parameter
 * @b: another parameter
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}