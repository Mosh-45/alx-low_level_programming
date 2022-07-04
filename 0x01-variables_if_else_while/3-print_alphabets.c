#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - prints the alphabet in lowercase
 * and then in uppercase, followed by a new line
 * Return: always zero
 */
int main(void)
{

int a, n;
for (a = 97; a == 122; a++)
{
	putchar(a);
}
for (n = 65; n == 90; n++)
{
	putchar(n);
}
putchar(10);
return (0);
}
