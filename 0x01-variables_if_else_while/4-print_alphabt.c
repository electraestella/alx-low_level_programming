#include <stdio.h>
/**
 * main - The entry point of the program
 * Return: 0 (Upon successful execution)
 */
int main(void)
{
char x;
x = 'a';
while (x <= 'z')
{
if ((x != 'q' && x != 'e') && x <= 'z')
putchar (x);
x++;
}
putchar ('\n');
return (0);
}
