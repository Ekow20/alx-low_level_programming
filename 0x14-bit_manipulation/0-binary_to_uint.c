#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer
 * @b: The binary string to convert
 *
 * Return: The unsigned integer equivalent of the binary string,
 * or 0 if the input string is NULL or not a valid binary string
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal_value = 0;

if (b == NULL) 
{
return 0;
}

for (int i = 0; b[i] != '\0'; i++)
{
char current_char = b[i];
if (current_char < '0' || current_char > '1') {
return 0;
}
decimal_value = decimal_value * 2 + (current_char - '0');
}

return (decimal_value);
}
