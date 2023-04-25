#include <stdio.h>

/**
 * main - main function
 *
 * Return: Return (0)
 */

int main(void)
{
	int d, p;

	for (d = '0'; d <= '8'; d++)
	{
		for (p = d + 1; p <= '9'; p++)	
	{
		putchar(d);
		putchar(p);
		if (d == '8' && p == '9')
			continue;
		putchar(',');
		putchar(' ');
	}

	}
	putchar('\n');
	return (0);
}
