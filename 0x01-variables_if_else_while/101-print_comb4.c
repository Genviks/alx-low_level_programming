#include <stdio.h>

/**
 * main - main function of the programme
 *
 * Return: Return (0) on success
 */

int main(void)

{
	int d, p, q;

	for (d = '0'; d <= '7'; d++)
	{
	for (p = d + 1; p <= '8'; p++)
	{
	for (q = p + 1; q <= '9'; q++)
	{
	if (d != p && d != q && p != q)
	{
	putchar(d);
	putchar(p);
	putchar(q);
	if (d == '7' && p == '8' && q == '9')
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
