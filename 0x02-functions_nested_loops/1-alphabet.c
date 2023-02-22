#include <stdio.h>

/**
*main - Entry Point
*Return: Always 0 (Success)
*/
char ch;
void print_alphabet(void)
{
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
