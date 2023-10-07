#include <stdio.h>
/**
 * main - The entry point of the program
 * Return: 0 (Upon successful execution)
 */
int main(void)
{
int x;
int y;
while (x < 10)
{
while (y < 10)
{
if (!(x > y) || x == y)
{
putchar(x);
putchar(y);
if (x == '8' && y == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
y++;
}
y = '0';
x++;
}
return (0);
}
