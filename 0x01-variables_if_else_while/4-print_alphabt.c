#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: always zero
 */
int main(void)
{

char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch == 'q' || ch == 'e')
	{
		continue;
	}
}
putchar(ch);
putchar(10);
return (0);
}
