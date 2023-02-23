#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
int f = 0;
while (f < 10)
{
int l = 0;
while (l < 10)
{
int a =(f * l); 
if (a < 10)
_putchar(a + '0');
else
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
if (l != 9)
{
if (a >= 10)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
l++;
}
f++;
_putchar('\n');
}
}
