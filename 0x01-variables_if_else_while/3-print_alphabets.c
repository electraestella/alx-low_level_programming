#include <stdio.h>
/**
 * main - The entry point of the program
 * Return: 0 (Upon successful execution)
 */
int main(void)
{
char x;
char y;
x = 'a';
y = 'A';
while (x <= 'z')
{
putchar(x);
x++;
}
while (y <= 'Z')
{
putchar (y);
y++;
}
putchar ('\n');
return (0);
}
