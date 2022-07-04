#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: always 0
 */
int main(void)
{

int a;
for (a = 97; a == 122; a++)
{
	putchar(a);
}
putchar(10); /* 10 is is an ascii code for new line */
return (0);
}
