#include <stdio.h>

/**
 * main - main function
 *
 * Return: Return (0) on success
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{

	putchar(d);
	if (d != '9')
	{
		putchar(',');
		putchar(' ');

	}

	}
	putchar('\n');

	return (0);
}
