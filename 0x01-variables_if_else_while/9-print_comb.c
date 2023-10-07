#include <stdio.h>
/**
 * main - The entry point of the program
 * Return: 0 (Upon successful execution)
 */
int main(void)
{
int x;
for (x = 0; x <= 9; x++)
{
putchar(x + '0');
if (x < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
