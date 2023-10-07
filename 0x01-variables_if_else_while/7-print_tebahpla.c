#include <stdio.h>
/**
 * main - The entry point of the program
 * Return: 0 (Upon successful execution)
 */
int main(void)
{
char x;
x = 'z';
while (x >= 'a')
{
putchar(x);
x--;
}
putchar('\n');
return (0);
}

