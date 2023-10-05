#include<stdio.h>
/**
 * main - A fuction that outputs the sizeof various computer data types
 * Return: 0 (Upon successful execution)
 */
int main(void)
{
char m;
int n;
long int o;
long long int p;
float q;
printf("Size of a char: %lu byte(s)\n", sizeof(m));
printf("Size of int: %lu byte(s)\n", sizeof(n));
printf("Size of long int: %lu byte(s)\n", sizeof(o));
printf("Size of long long int: %lu byte(s)\n", sizeof(p));
printf("Size of float: %lu byte(s)\n", sizeof(q));
return (0);
}
