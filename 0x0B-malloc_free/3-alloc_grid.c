#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width
* @height: height
* Return: pointer to 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
int **tarr;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

tarr = malloc(sizeof(int *) * height);
if (tarr == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
tarr[x] = malloc(sizeof(int) * width);
if (tarr[x] == NULL)
{
for (; x >= 0; x--)
free(tarr[x]);

free(tarr);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
tarr[x][y] = 0;
}

return (tarr);
}
