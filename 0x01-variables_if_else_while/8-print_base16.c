#include <stdio.h>
/**
 * main - The entry point of the program
 * Return: 0 (Upon successful execution)
 */
int main(void)
{
char x;
int y;
x = 'a';
y = 0;
while (y <= 9)
{
putchar(y + '0');
y++;
}
while (x <= 'f')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
