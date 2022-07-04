#include<stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: always 0
 */
int main(void)
{

int h;
for (h = 48; h <= 57; h++)
{
	putchar(h);
	if (h != 57)
	{
		putchar(44);
		putchar(32);
	}
}
putchar(10);
return (0);
}
