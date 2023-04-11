#include "main.h"
/**
 * clear_bit - Sets the value of a bit at a given index to 0 in an unsigned long int
 * @n: A pointer to the unsigned long int to modify
 * @index: The index of the bit to set to 0
 *
 * This function sets the value of the bit at the specified index to 0 in the binary
 * representation of an unsigned long int.
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
