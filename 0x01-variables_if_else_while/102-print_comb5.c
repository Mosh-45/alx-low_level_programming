#include<stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: always 0
 */
int main(void)
{

int m, n;
for (m = 0; n <= 99; n++)
{
	for (m = n; m <= 99; m++)
	{
		if (m != n)
		{
			putchar(n / 10 + 48);
			putchar(n % 10 + 48);
			putchar(' ');
			putchar(m / 10 + 48);
			putchar(m % 10 + 48);
			if (n * 100 + m != 9899)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar(10);
return (0);
}
