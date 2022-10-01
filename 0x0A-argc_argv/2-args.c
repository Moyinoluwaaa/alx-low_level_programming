#include "main.h"
/**
 * main - prints the main function
 * @argc: msj
 * @argv: jkl
 * Return: gives feedback
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
printf("\n");
}
return (0);
}