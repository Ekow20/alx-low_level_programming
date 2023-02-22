#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
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
int main(void)
{
    print_alphabet_x10();
    return (0);
}
