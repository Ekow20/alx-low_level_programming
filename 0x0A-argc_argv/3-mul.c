#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
if (argc == 3)
{
int ans;
ans = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n",ans);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
