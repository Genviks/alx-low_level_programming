#include <stdio.h>

/**
 * main - main function
 *
 * Return: Return (0) on Success
 */
int main (void)
{
	char lowercase = 'a''
	char uppercase = 'A';

	while (lowercase <= 'z')
	{

		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{

		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
