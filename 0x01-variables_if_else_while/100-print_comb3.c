#include <stdio.h>
/**
 * main - The entry point of the program
 * Return: 0 (Upon successful execution)
 */
int main(void)
{
int x;
int y;
for (x = 0; x < 10; x++)
{
for (y = x + 1; y < 10; y++)
{
putchar(x + '0');
putchar(y + '0');
if (x == 8 && y == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
