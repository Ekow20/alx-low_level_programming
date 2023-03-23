#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);
va_list args;
int sum = 0;
int i;
va_start(args, n);
for(i=0; i < n; i++)
{
int x = va_arg(args, int);
sum += x;
}
return (sum);
va_end(args);
}
