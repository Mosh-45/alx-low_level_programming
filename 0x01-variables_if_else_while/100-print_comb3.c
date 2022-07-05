#include<stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: always 0
 */
int main(void)
{

int h;
int n;
for (h = 48; h <= 57; h++)
{
	for (n = 49; n <= 57; n++)
	{
		if (n > h)
		{
			putchar(h);
			putchar(n);
			if (h != 56 || n != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
}
return (0);
}
