#include "main.h"
/**
 * *_calloc - creates array
 * @nmemb: sizeof it
 * @size: wjw
 * Return: returns
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *meme;
unsigned int i;

meme = malloc(size * nmemb);
if (nmemb == 0)
return (NULL);
if (size == 0)
return (NULL);
if (meme == NULL)
return (NULL);
for (i = 0; i < (size * nmemb); i++)
meme[i] = 0;
return (meme);
}