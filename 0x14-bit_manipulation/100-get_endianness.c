#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
int i = 1;
char *check = (char*) &i;

if (*check == 1)
return (1);
else
return (0);
}
