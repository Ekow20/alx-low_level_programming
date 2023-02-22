#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int f;
if (n < 0)
n = -n;
f = n % 10;
_putchar(f + '0');
return (f);
}
