#include "main.h"
/**
 * set_bit - Sets the value of a bit at a given index to 1 in an unsigned long int
 * @n: A pointer to the unsigned long int to modify
 * @index: The index of the bit to set to 1
 *
 * This function sets the value of the bit at the specified index to 1 in the binary
 * representation of an unsigned long int. If the specified index is greater than 63,
 * the function returns -1 to indicate failure. Otherwise, the bit is set to 1 and
 * the function returns 1 to indicate success.
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
