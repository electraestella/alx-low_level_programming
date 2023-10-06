#include <stdio.h>
/**
 * main - A function for the entry point
 * Return: 0 (Upon successful execution)
 */
int main(void)
{
char b;
b = 'a';
while (b <= 'z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
