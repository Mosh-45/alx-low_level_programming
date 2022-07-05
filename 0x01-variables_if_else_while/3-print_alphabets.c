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

int a;
for (a = 'a'; a <= 'z'; a++)
{
	putchar(a);
}
for (a = 'A'; a <= 'Z'; a++)
{
	putchar(a);
}
putchar(10);
return (0);
}
