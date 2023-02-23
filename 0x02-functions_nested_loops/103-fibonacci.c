#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: Always 0
 */
int main(void)
{
int i;
unsigned long int f, l, next, sum;
f = 1;
l = 2;
sum = 0;
for (i = 1; i <= 33; ++i)
{
if (f < 4000000 && (f % 2) == 0)
{
sum = sum + f;
}
next = f + l;
f = l;
l = next;
}
printf("%lu\n", sum);
return (0);
}
