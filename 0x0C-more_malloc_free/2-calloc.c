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
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
