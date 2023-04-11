#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a given index in an unsigned long int
 * @n: The unsigned long int to search
 * @index: The index of the bit to retrieve
 * Return: The value of the bit at the specified index, or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;
if (index > 63)
return (-1);
bit_value = (n >> index) & 1;
return (bit_value);
}
