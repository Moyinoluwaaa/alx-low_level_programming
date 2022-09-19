#include "main.h"
/**
 * _puts - func name
 * @str: parameter
 * Return: void
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
