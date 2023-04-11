#include "main.h"

/**
 * count_set_bits - counts the number of set bits in a number
 * @num: the number to count the set bits in
 *
 * Return: the number of set bits
 */
unsigned int count_set_bits(unsigned long int num)
{
unsigned int count = 0;

while (num > 0) {
if (num & 1)
count++;
num >>= 1;
}

return (count);
}

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int exclusive;
unsigned int count;

exclusive = n ^ m;
count = count_set_bits(exclusive);

return (count);
}
