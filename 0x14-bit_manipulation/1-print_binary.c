#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int
 * @n: The unsigned long int to print
 *
 * This function prints the binary representation of an unsigned long int
 * to the standard output using the _putchar function.
 */
void print_binary(unsigned long int n)
{
int counter = 0;
int i;
for (i = 63; i >= 0; i--)
{
unsigned long int current = n >> i;

if (current & 1)
{
_putchar('1');
counter++;
}
else if (counter)
{
_putchar('0');
}
}
if (!counter)
{
_putchar('0');
}
}
