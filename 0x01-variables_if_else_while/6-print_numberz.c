#include <stdio.h>
/**
 * main - The entry point of the program
 * Return: 0 (Upon successful execution)
 */
int main(void)
{
int x;
x = 0;
while (x <= 9)
{
putchar (x + '0');
x++;
}
putchar ('\n');
return (0);
}
