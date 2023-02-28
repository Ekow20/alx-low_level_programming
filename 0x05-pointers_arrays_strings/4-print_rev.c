#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
int i;
s--;
for ( i = len; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
