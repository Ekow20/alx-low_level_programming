#include "main.h"
/**
 * print_alphabet_x10 
 *
 */
char ch;
int i;
void print_alphabet_x10(void)
{
for ( i = 0; i < 10; i++)
{   
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
}
}
