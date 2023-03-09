#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The input string to be measured.
 *
 * Return:  Length of the string.
 */
int _strlen_recursion(char *s)
{
int counter = 0;
if (*s)
{
counter++;
counter += _strlen_recursion(s + 1);
}
return (counter);
}
