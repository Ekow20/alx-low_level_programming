#include "main.h"
#include <string.h>
/**
 * puts_half - function  prints half of a string
 * @str: input
 */

void puts_half(char *str)
{
int len = strlen(str);
int i;
if (len % 2 == 0)
{
for (i = 0; i < len / 2 ; i++)
_putchar(str[i]);
}
else
{
for (i = (len - 1) / 2; i < len ; i++)
_putchar(str[i]);
}
_putchar('\n');
}
