#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @array: param
 * @size: param
 * @action: ndif
 * Return: rer
 */
void array_iterator(int *array, size_t size, void (*action)(int));