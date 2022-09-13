#include <stdio.h>
#include "main.h"
void print_alphabet(void){
    int w = 'a';
    for (; w <= 'z'; w++)
{
    putchar(w);
}
}

/**
* main - Entry point
*
* print_alphabet - prints alphabet
* 
* Return: ends the program
*/
int main(void)
{
print_alphabet();
return (0);
}
