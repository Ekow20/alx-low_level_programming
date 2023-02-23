#include <stdio.h>
#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
int f = 0;
while (f < 10)
{
int l = 0;
while (l < 10)
{
int a =(f*l); 
printf("%d",a );
if(l!=9)
printf(", ");
l++;
}
f++;
printf("\n");
}
}
int main(int argc, char const *argv[])
{
jack_bauer();    
    return 0;
}
