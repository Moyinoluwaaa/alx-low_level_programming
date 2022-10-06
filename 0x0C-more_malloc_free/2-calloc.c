#include "main.h"
/**
 * *_calloc - creates array
 * @nmemb: sizeof it
 * @size: wjw
 * Return: returns
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *meme = 0;

meme = malloc(size * nmemb);
if (nmemb == 0)
return (NULL);
if (size == 0)
return (NULL);
if (meme == NULL)
return (NULL);
return (meme);
}
