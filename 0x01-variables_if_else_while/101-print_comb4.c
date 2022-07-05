#include<stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: always 0
 */
int main(void)
{

int m, n, p;
for (m = 48; m < 58; m++)
{
	for (n = m; n < 58; n++)
	{
		for (p = n; p < 58; p++)
		{
			if (m == n || n == p || m == p)
			{
				continue;
			}
			putchar(m);
			putchar(n);
			putchar(p);
			if (m == 55 && n == 56 && p == 57)
			{
				break;
			}
			else
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
}
putchar(10);
return (0);
}
