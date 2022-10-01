#include "main.h"
/**
 * main - prints the main function
 * @argc: msj
 * @argv: jkl
 * Return: gives feedback
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int i, mul = 1;

for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
printf("%d", mul);
printf("\n");
}
return (0);
}