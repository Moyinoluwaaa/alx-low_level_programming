#include "main.h"
/**
 * *str_concat - creates array
 * @s1: sizeof it
 * @s2: wjw
 * Return: returns
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *meme = 0;

meme = malloc(sizeof(size) * nmemb);
if (nmemb == 0)
return (NULL);
if (size == 0)
return (NULL);
if (meme == NULL)
return (NULL);
return (meme);
} 