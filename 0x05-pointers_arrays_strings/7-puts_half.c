#include "main.h"
#include <string.h>
/**
 * puts_half - function  prints half of a string
 * @str: input
 */

void puts_half(char *str)
{
int len = strlen(str);
int n = (len + 1) / 2;
int i;
for (i = n; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
