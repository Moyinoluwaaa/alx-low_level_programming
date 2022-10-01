#include "main.h"
/**
 * main - prints the main function
 * @argc: msj
 * @argv: jkl
 * Return: gives feedback
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
