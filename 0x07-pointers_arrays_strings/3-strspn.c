#include "main.h"

/**
 * _strspn - the func name
 * @s: para1
 * @accept: para2
 * Return: returns the value
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, k;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
{
return(i);
}
}
} 
return(i);
}

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}