#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
if (argc == 3)
{
int ans;
ans = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n",ans);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
