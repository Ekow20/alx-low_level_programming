#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - perform func on each element of the array
 * @array: array
 * @size: number of elements in array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
