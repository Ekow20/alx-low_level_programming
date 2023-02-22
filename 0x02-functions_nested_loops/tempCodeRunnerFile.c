#include <stdio.h>

/**
*main - Entry Point
*Return: Always 0 (Success)
*/
int _islower(int c)
{
if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
return 1;
else
return 0;
}
int main(void)
{
int r;
r = _isalpha('H');
putchar(r + '0');
r = _isalpha('o');
putchar(r + '0');
r = _isalpha(108);
putchar(r + '0');
r = _isalpha(';');
putchar(r + '0');
putchar('\n');
return (0);
}
