#include "main.h"
#include <math.h>
int is_prime_helper(int n, int i);
/**
 * is_prime_helper - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */


int is_prime_helper(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (i > sqrt(n))
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
